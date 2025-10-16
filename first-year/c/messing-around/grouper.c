#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // rng
#include <time.h> // rng


void getGroup(int groupNumber, int membersPerGroup, char *masterList[], int masterListSize, char *alreadyGrouped[]);
char* getMember(char *masterList[], int masterListSize, char *alreadyGrouped[], int idx);
bool isInGroup(char *member, char *alreadyGrouped[]);


char *masterList[] = {
    "Name1",
    "Name2",
    "Name3",
    "Name4",
    "Name5",
    "Name6",
    "Name7",
    "Name8",
    "Name9",
    "Name10",
    "Name11",
    "Name12",
    "Name13",
    "Name14",
    "Name15",
    "Name16",
    "Name17",
    "Name18",
    "Name19",
    "Name20",
    "Name21",
    "Name22",
    "Name23",
    "Name24",
    "Name25",
    "Name26",
    "Name27",
    "Name28",
    "Name29",
    "Name30",
    "Name31",
    "Name32",
    "Name33",
    "Name34",
    "Name35",
    "Name36",
    "Name37",
    "Name38",
    "Name39",
    "Name40",
    "Name41",
    "Name42",
    "Name43",
    "Name44",
    "Name45",
    "Name46",
    "Name47",
    "Name48",
    "Name49",
};

int groupedCount = 0;


int main() {

    srand(time(NULL));

    int numOfGroups;
    printf("\nInput number of groups: ");
    scanf("%d", &numOfGroups);

    int masterListSize = sizeof(masterList) / sizeof(masterList[0]);
    int membersPerGroup = masterListSize / numOfGroups;
    int remainder = masterListSize % numOfGroups;

    //printf("\nMembers per group: %d", membersPerGroup);

    char *alreadyGrouped[masterListSize];
    for (int i = 0; i < masterListSize; i++) {
        alreadyGrouped[i] = NULL;
    }

    for (int i = 1; i <= numOfGroups; i++) {
        int groupSize = membersPerGroup + (i <= remainder ? 1 : 0);
        getGroup(i, groupSize, masterList, masterListSize, alreadyGrouped); // i is group number
    }
}


void getGroup(int groupNum, int groupSize, char *masterList[], int masterListSize, char *alreadyGrouped[]) {

    char *group[groupSize];
    
    printf("\nGroup %d (%d members):", groupNum, groupSize);

    for (int i = 1; i <= groupSize; i++) {

        group[i] = getMember(masterList, masterListSize, alreadyGrouped, i);
        printf("\n- %s", group[i]);

    }
}


char* getMember(char *masterList[], int masterListSize, char *alreadyGrouped[], int idx) {

    char *member = masterList[rand() % masterListSize];

    if ( isInGroup(member, alreadyGrouped) ) {
        member = getMember(masterList, masterListSize, alreadyGrouped, idx);
    } else {
        alreadyGrouped[groupedCount] = member;
        groupedCount++;
    }

    return member;
}


bool isInGroup(char *member, char *alreadyGrouped[]) {

    for (int i = 0; alreadyGrouped[i] != NULL; i++) {
        if (member == alreadyGrouped[i]) {
            return true;
        }
    }

    return false;
}


/*

get all members
get random member
if random member in already grouped: get new random member
else: append random member to group; append random member to already grouped

*/
