#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
 typedef struct Playlist {
	char* name;
	char* first_song;
    char* last_song;
	int number_of_song;
    int total_duration;
	struct Playlist* next;
}Playlist;

typedef struct Node {
	char* name;
	char* artist;
    int duration;
	char* genre;
    char* next_song;
	int id_in_playlist;
	struct Node* next;
}Node;
Node * Song_new(Playlist *pl)
{
    char name[35],artist[35],genre[35];
    int duration,ID;
    printf("\nPlease enter song name: ");
    scanf(" %s[^\n]",name);
    printf("\nPlease enter song artist: ");
    scanf("%s",artist);
    printf("\nPlease enter song genre: ");
    scanf("%s",genre);
    printf("\nPlease enter song duration with seconds: ");
    scanf("%i",&duration);
    printf("\nPlease enter song ID: ");
    scanf("%i",&ID);
    Node *song = malloc(sizeof(Node));
    strcpy(song->artist,artist);
    strcpy(song->name,name);
    strcpy(song->genre,genre);
    song->duration = duration;
    song->id_in_playlist = ID;
    song->next_song = NULL;
    return song;
}
void create_song_node(char* name, char* artist,int duration,char* genre,int id_in_playlist, struct Node** temp)
{
	struct Node *r, *z;
	z = *temp;
	if (z == NULL) {
		r = (struct Node*)malloc(sizeof(struct Node));   
		r->name = name;
		r->artist = artist;
        r->duration = duration;
        r->genre = genre;
        r->id_in_playlist = id_in_playlist;
		*temp = r;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
	else {
		r->name = name;
		r->artist = artist;
        r->duration = duration;
        r->genre = genre;
        r->id_in_playlist = id_in_playlist;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
}


void create_playlist_node(char* name, struct Playlist** temp)
{
	struct Playlist *r, *z;
	z = *temp;
	if (z == NULL) {
		r = (struct Playlist*)malloc(sizeof(struct Playlist));   
		r->name = name;
		*temp = r;
		r->next = (struct Playlist*)malloc(sizeof(struct Playlist));
		r = r->next;
		r->next = NULL;
	}
	else {
		r = (struct Playlist*)malloc(sizeof(struct Playlist));   
		r->name = name;
		r->next = (struct Playlist*)malloc(sizeof(struct Playlist));
		r = r->next;
		r->next = NULL;
	}
}
void show(struct Node* node)
{
    printf("\nMusic:\n");
	while (node->next != NULL) {
		printf("\nName:%s;\nArtist:%s;\nDuration:%d;\nGenre:%s;\nID:%d\n", node->name, node->artist,node->duration,node->genre,node->id_in_playlist);
		node = node->next;
		
		if (node->next != NULL){
			printf("-->");}
		else{
			printf("-->E");
		}
		
	
}
	
    printf("\n");
}

void push(struct Playlist** head_ref, char* new_data)
{
    /* 1. allocate node */
    struct Playlist* new_node = (struct Playlist*) malloc(sizeof(struct Playlist));
  
    /* 2. put in the data  */
    new_node->first_song  = new_data;
  
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
  
    /* 4. move the head to point to the new node */
    (*head_ref)    = new_node;
}
void sortList() {  
        //Node current will point to head  
        struct Node *current = NULL, *index = NULL;  
        int temp;  
          
          
          
            while(current != NULL) {  
                //Node index will point to node next to current  
                index = current->next;  
                  
                while(index != NULL) {  
                    //If current node's data is greater than index's node data, swap the data between them  
                    if(current->id_in_playlist > index->id_in_playlist) {  
                        temp = current->id_in_playlist;  
                        current->id_in_playlist = index->id_in_playlist;  
                        index->id_in_playlist = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        }  
    
bool searchNodeId(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
    if (current->id_in_playlist == key) return true;
      current = current->next;
  }
  return false;
}
bool searchNodeName(struct Node** head_ref, char* key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
    if (current->name == key) return true;
      current = current->next;
  }
  return false;
}
void insertAfter(struct Node* prev_node, int new_data) {
  if (prev_node == NULL) {
  printf("the given previous node cannot be NULL");
  return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->id_in_playlist = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}
void deleteNodeID(struct Node** head_ref, int key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->id_in_playlist == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->id_in_playlist != key) {
  prev = temp;
  temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL) return;

  // Remove the node
  prev->next = temp->next;

  free(temp);
}
void deleteNodeName(struct Node** head_ref, char* key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->name == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->name != key) {
  prev = temp;
  temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL) return;

  // Remove the node
  prev->next = temp->next;

  free(temp);
}
void printList(struct Playlist *node,struct Node *song)
{
printf("Playlist:%s\n",node->name);
printf("Songs:\n");
  while (song != NULL)
  {
     printf("  %s \n", song->name);
     song = song->next;
  }
  }
int main(){
struct Node  *song = NULL ;
struct Playlist *playlist = NULL;
char pl[30];
int k;
char name[35],artist[35],genre[35];
int duration,ID;
printf("Create playlist:\n");
printf("Name:");
scanf("%s",pl);
create_playlist_node(pl, &playlist);
printf("Playlist created successfully.\n");
while(1){

        printf("1)Add new music\n");
        printf("2)Add new music after given ID\n");
        printf("3)Delete music by name\n");
        printf("4)Delete music by ID\n");
        printf("5)Find music by name\n");
        printf("6)Find music by ID\n");
        printf("7)Sort musics by name\n");
        printf("8)Sort musics by ID\n");
        printf("9)Print playlist\n");
        printf("12)Exit\n");
		scanf("%d",&k);
		if(k==1){
			

			printf("\nPlease enter song name: ");
			scanf(" %s[^\n]",name);
			printf("\nPlease enter song artist: ");
			scanf("%s",artist);
			printf("\nPlease enter song genre: ");
			scanf("%s",genre);
			printf("\nPlease enter song duration with seconds: ");
			scanf("%d",&duration);
			printf("\nPlease enter song ID: ");
			scanf("%d",&ID);
			printf("\n");
			printf("Music created successfully.\n");
			create_song_node(name, artist,duration,genre,ID, &song);

			show(song);
		}
		else if(k==2){
			printf("Enter ID:");
			scanf("%d",&ID);
			insertAfter(song,ID);
		}
		else if(k==3){
			printf("Enter name:");
			scanf("%s",name);
			deleteNodeName(&song,name);
		}
		else if(k==4){
			printf("Enter ID:");
			scanf("%d",&ID);
			deleteNodeID(&song,ID);
		}
		else if(k==5){
			printf("Enter name:");
			scanf("%s",name);
			searchNodeName(&song,name);
		}
		else if(k==6){
			printf("Enter ID:");
			scanf("%d",&ID);
			searchNodeId(&song,ID);
		}
		else if(k==9){
			printList(playlist,song);
		}
    else{
      break;
    }







}
}