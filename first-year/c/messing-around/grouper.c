#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // rng
#include <time.h> // rng


void getGroup(int groupNumber, int membersPerGroup, char *masterList[], int masterListSize, char *alreadyGrouped[]);
char* getMember(char *masterList[], int masterListSize, char *alreadyGrouped[], int idx);
bool isInGroup(char *member, char *alreadyGrouped[]);


// 49?
char *masterList[] = {
    "Abatayo",
    "Alivio",
    "Almodal",
    "Almonteros",
    "Anahaw",
    "Aventurado",
    "Bacarisas",
    "Bacu",
    "Batomalaque",
    "Braza",
    "Cabalog",
    "Canon",
    "Crescencio",
    "Dicdican",
    "Diolin",
    "Doriquez",
    "Espadero",
    "Fuertes",
    "Garbo",
    "Guia",
    "Herbias",
    "Inot",
    "Jumao-as",
    "Lagahid",
    "Lemeric",
    "Lopez",
    "Manto",
    "Mercado",
    "Monroid",
    "Montecalvo",
    "Ongcoy",
    "Ortiz",
    "Pancho",
    "Projimo",
    "Rodrigo",
    "Rodriguez",
    "Romarate",
    "Rosal",
    "Rosales",
    "Solon",
    "Sumina",
    "Tagalog",
    "Talisic",
    "Tiro",
    "Tito",
    "Vargas",
    "Villaro",
    "Villaver",
    "Ybanez",
};


int main() {

    srand(time(NULL));

    int numOfGroups;
    printf("\nInput number of groups: ");
    scanf("%d", &numOfGroups);

    int masterListSize = sizeof(masterList) / sizeof(masterList[0]);
    int membersPerGroup = masterListSize / numOfGroups;

    printf("\nMembers per group: %d", membersPerGroup);

    char *alreadyGrouped[masterListSize];

    for (int i = 1; i <= numOfGroups; i++) {

        //printf("\n\nGetting Group %d...", i);

        alreadyGrouped[i] = NULL;

        getGroup(i, membersPerGroup, masterList, masterListSize, alreadyGrouped); // i is group number

    }
}


void getGroup(int groupNum, int membersPerGroup, char *masterList[], int masterListSize, char *alreadyGrouped[]) {

    char *group[membersPerGroup];
    
    printf("\nGroup %d:", groupNum);

    for (int i = 1; i <= membersPerGroup; i++) {

        group[i] = getMember(masterList, masterListSize, alreadyGrouped, i);
        printf("\n- %s", group[i]);

    }
}


char* getMember(char *masterList[], int masterListSize, char *alreadyGrouped[], int idx) {

    char *member = masterList[rand() % masterListSize];

    if ( isInGroup(member, alreadyGrouped) ) {
        member = getMember(masterList, masterListSize, alreadyGrouped, idx);
    } else {
        alreadyGrouped[idx] = member;
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
