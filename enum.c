/*enum State {WORKING = 0, FAILED, FREEZED};
enum State currState = 2;
enum State FindState() {
    return currState;
}
int main() {
(FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING");
return 0;
}*/

typedef struct
{
char name[50];
int salary;
}employee;
void main( )
{
employee e1;

printf("\nEnter Employee record:\n");
printf("\nEmployee name:\t");
scanf("%s", e1.name);
printf("\nEnter Employee salary: \t");
scanf("%d", &e1.salary);
printf("\nstudent name is %s", e1.name);
printf("\nroll is %d", e1.salary);
}



