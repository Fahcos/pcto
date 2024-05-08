#include<unistd.h>
#include<stdio.h>
int main()
{
    char nome[50];
    int a, b, c, d, e, f, g, h, i;
    sleep(1);
    printf("Notte\n");
    sleep(1);
    printf("Non ho idea di che ore sono\n");
    sleep(2);
    printf("Controlla il telefono:\n");
    sleep(1);
    printf("1: si\n");
    sleep(1);
    printf("2: no\n");
    sleep(1);
    scanf("%d", &b);
    if (b==1)
        {
            sleep(1);
            printf("Sono le 4:00\n");
        }
    else if (b==2)
        {
            
        }
    sleep(1);
    printf("Non ho sonno, non so perché.\n");
    sleep(2);
    printf("Sento il peso del mio corpo ma non ne percepisco la stanchezza.\n");
    sleep(2);
    printf("Alzati\n");
    sleep(1);
    printf("1: Ora\n");
    sleep(1);
    printf("2: Tra dieci minuti\n");
    sleep(1);
    scanf("%d", &a);
    if (a==1)
    {

    }
    else if(a==2)
    {
        sleep(1);
        printf("Non ho sonno, a sto punto mi alzo lo stesso\n");
    }
    sleep(2);
    printf("Mi sento fiacco, come se avessi appena corso una maratona");
    printf(" ma ieri non ho neanche fatto gli straordinari a lavoro.\n");
    sleep(2);
    printf("Non vedo niente, è tutto buio, ma non fa paura...\n");
    sleep(2);
    printf("Si accende di colpo la luce, ma per qualche secondo non ");
    printf("riesco a vedere niente perché i miei occhi si erano abituati all'oscurità\n");
    sleep(3);
    printf("Mi gira la testa\n");
    sleep(2);
    printf("Vai in bagno a prendere una pasticca?\n");
    sleep(1);
    printf("1: Si\n");
    sleep(1);
    printf("2: No\n");
    sleep(1);
    scanf("%d", &c);
    if (c==1)
    {
        sleep(1);
        printf("Faccio per andare in bagno, ma aspetta...");
        sleep(2);
        printf("questa non è casa mia...dov'è finito il mio telefono?\n");
        sleep(2);
        printf("Ho per caso avuto un'allucinazione?\n");
    }
    else if(c==2)
    {
        sleep(2);
        printf("Aspetta...dove sono?\n");
        sleep(2);
        printf("questa non è casa mia...dov'è finito il mio telefono?\n");
        sleep(2);
        printf("Ho per caso avuto un'allucinazione?\n");
    }
    sleep(2);
    printf("Davanti a me si trova un corridoio senza porte né una fine visibile, ");
    printf("illuminato da una luce spenta ma fastidiosa, che mi disturba gli occhi.\n");
    sleep(3);
    printf("Adesso sì, sono un po' spaventato, anche perché chissà se sono stato drogato ");
    printf("e rapito da qualche matto, anche perché non mi ricordo niente...\n");
    sleep(3);
    printf("non mi ricordo...il mio nome?\n");
    sleep(2);
    printf("Come mi chiamo?\n");
    sleep(2);
    printf("So che lavoro faccio ma non il mio nome?\n");
    sleep(2);
    printf("Ce l'ho sulla punta della lingua ma non mi viene...\n");
    sleep(1);
    printf("Qual è il mio nome? ");
    sleep(1);
    scanf("%s", nome);
    sleep(2);
    printf("Si...%s...ecco...credo...\n", nome);
    sleep(2);
    printf("Vai avanti nel corridoio?\n");
    sleep(1);
    printf("1: si\n");
    sleep(1);
    printf("2: no\n");
    sleep(1);
    scanf("%d", &d);
    if (d==1)
    {
        //da continuare collegato a no fatti forza//
    }
    else if (d==2)
    {
        sleep(2);
        printf("Mi giro, dietro di me c'è una porta.\n");
        sleep(2);
        printf("Strano, sembra socchiusa.\n");
        sleep(1);
        printf("Apri la porta?\n");
        sleep(1);
        printf("1: si\n");
        sleep(1);
        printf("2: no\n");
        sleep(1);
        scanf("%d", &e);
        if (e==1)
        {
            sleep(2);
            printf("Appena afferro la maniglia sento una scossa d'adredalina.\n");
            sleep(2);
            printf("Mi fermo, anche perché la paura e l'adrenalina sono così forti ");
            printf("che non riesco a muovere un  muscolo");
            sleep(2);
            printf("Fatti forza\n");
            sleep(1);
            printf("1: si\n");
            sleep(1);
            printf("2: no\n");
            sleep(1);
            scanf("%d", &f);
            if (f==2)
            {
                //domanda corridoio//
            }
            else if (f==1)
            {
                sleep(2);
                printf("Non si torna più indietro...\n");
                sleep(2);
                printf("Un altro corridoio\n");
                sleep(2);
                printf("Questo però ha una fine,e non è così corto, ");
                printf("anzi vedo pure qualcosa lì infondo\n");
                sleep(2);
                printf("È una persona");
                sleep(3);
                printf("1: avvicinati");
                sleep(1);
                printf("2: scappa");
                sleep(1);
                scanf("%d", &g);
                if (g==2)
                {
                    sleep(2);
                    printf("La porta dietro è scomparsa\n");
                    sleep(2);
                    printf("A sto punto mi avvicino\n");
                }
                else if (g==1)
                {

                }
                sleep(2);
                printf("Più mi avvicino più inizio a sentire una sensazione strana, \ncome se conoscessi la persona davanti a me");
                sleep(2);
                printf("Ah\n");
                sleep(3);
                printf("Sono io\n");
                sleep(3);
                printf("Parlagli\n");
                sleep(1);
                printf("1: si");
                sleep(1);
                printf("2: no");
                sleep(1);
                scanf("%d", &h);
                if (h==2)
                {

                }
                else if (h==1)
                {
                    sleep(2);
                    printf("<Cosa sta succedendo?>\n");
                }
                sleep(2);
                printf("L'altro me apre la bocca come se volesse dirmi qualcosa\n");
                sleep(2);
                printf("<Troppo tardi, non puoi più fare niente.");
                sleep(2);
                printf(" Ci siamo rovinati con le nostre stesse mani. ");
                sleep(2);
                printf("Anni e anni a correre dietro a desideri irrealizabili consapevoli della loro natura. ");
                sleep(2);
                printf("Invece che proseguire con gli studi abbiamo deciso di correre dietro ");
                printf("ad una ragazza che non ci vedeva comee noi vedevamo lei.");
                sleep(2);
                printf(" E così il nostro equilibrio ci è crollato addosso."); 
                sleep(2);
                printf(" E tutte le nostre certezze si sono sgretolate.");
                
            }
        }
        else if (e==2)
        {
            //da continuare//
        }
    }
}