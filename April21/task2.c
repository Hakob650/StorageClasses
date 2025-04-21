#include <stdio.h>
struct BankAccount {
    int accountnumber;
    char accountholder[50];
    float balance;
};
void Deposit(struct BankAccount *account,float amount){
    if(amount>0){
        account->balance+=amount;
        printf("Deposited %.2f successfully.\n",amount);
    }else{
        printf("Invalid Deposit Amount.\n");
    }
}


void Withdraw(struct BankAccount *account, float amount) {
    if (amount <= 0) {
        printf("Invalid Withdrawal Amount.\n");
    } else if (amount > account->balance) {
        printf("Insufficient Balance.\n");  
    } 
}

void DisplayAccount(struct BankAccount account){
    printf("\n----Account Details----\n");
    printf("Account Number: %d\n",account.accountnumber);
    printf("Account Holder: %s\n",account.accountholder);
    printf("Balance: %.2f\n",account.balance);
}
int main(){
    struct BankAccount myAccount = {1001, "Hakob", 1000.00};
    DisplayAccount(myAccount);

    Deposit(&myAccount, 500.00); 
    Withdraw(&myAccount, 300.00);
    Withdraw(&myAccount, 1500.00);

     DisplayAccount(myAccount);     


}
