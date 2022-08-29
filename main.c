VOID splits(char* task, LPSTR pTask[])
{
    char newTask[40];
    strcpy(newTask, task);
 
    pTask[0] = strtok(newTask, " ");
    for (int i = 1; i < 4; i++)
        pTask[i] = strtok(NULL, " ");
 
}
 
int main()
{
    char* task = "hello my friend !";
    LPSTR pTask[4] = { "", "", "", "" };
 
    splits(task, pTask);
 
    for (int i = 0; i < 4; i++)
        printf("%s\n", pTask[i]);
    
    return 0;
}
