//conversor de velocidade
#include <stdio.h>
#include <windows.h>
#include <conio.h>
int printmenu(){
	int resposta;
	printf("\n *******  VELOCIDADE *******");
	printf("\n *                         *");
	printf("\n * 1) Km/h    --> m/s      *");
	printf("\n * 2) Km/h    --> m/min    *");
	printf("\n * 3) Km/h    --> m/h      *");
	printf("\n * 4) Km/h    --> Km/min   *");
	printf("\n * 5) Km/h    --> Km/s     *");
	printf("\n * 6) Km/min  --> Km/s     *");
	printf("\n * 7) m/s     --> Km/h     *");
	printf("\n * 8) m/s     --> m/min    *");
	printf("\n * 9) m/s     --> m/h      *");
	printf("\n * 10) m/s    --> cm/s     *");
	printf("\n * 11) C      --> Mach     *");
	printf("\n * 12) C      --> m/s      *");
	printf("\n * 13) C      --> Km/h     *");
	printf("\n * 14) Mach   --> C        *");
	printf("\n * 15) Mach   --> m/s      *");
	printf("\n * 16) Mach   --> Km/h     *");
	printf("\n * 17) mph    --> mpm      *");
	printf("\n * 18) mph    --> mps      *");
	printf("\n * 19) mpm    --> mps      *");
	printf("\n * 20) mps    --> mpm      *");
	printf("\n * 21) mps    --> m/s      *");
	printf("\n * 22) mpm    --> m/min    *");
	printf("\n * 23) mph    --> Km/h     *");
	printf("\n * 24) cm/s   --> m/s      *");
	printf("\n * 25) cm/s   --> Km/h     *");
	printf("\n * 26) cm/s   --> cm/min   *");
	printf("\n * 27) cm/h   --> cm/min   *");
	printf("\n * 28) cm/min --> cm/h     *");
	printf("\n * 29) fps    --> fpm      *");
	printf("\n * 30) fpm    --> f        *");
	printf("\n * 31) fph    --> fps      *");
	printf("\n * 32) fph    --> Km/h     *");
	printf("\n * 33) fpm    --> m/min    *");
	printf("\n * 34) fps    --> m/s      *");
	printf("\n * 35) nm/h   --> mph      *");
	printf("\n * 36) nm/h   --> Km/h     *");
	printf("\n * 37) nm/h   --> m/s      *");
	printf("\n * 38) mph    --> nm/h     *");
	printf("\n * 39) Km/h   --> nm/h     *");
	printf("\n * 40) nm/h   --> Kn       *");
	printf("\n * 41) Kn     --> Km/h     *");
	printf("\n * 42) Kn     --> m/s      *");
	printf("\n * 43) Kn     --> nm/h     *");
	printf("\n * 44) Kn     --> fps      *");
	printf("\n * 45) iph    --> ipm      *");
	printf("\n * 46) ipm    --> ips      *");
	printf("\n * 47) ips    --> iph      *");
	printf("\n * 48) Sair do programa    *");
	printf("\n *                         *");
	printf("\n ***************************");
	printf("\n\n Informe a opção desejada: ");
	scanf("%d", &resposta);
	return resposta;
}
float KpM(float speed){
	return(speed/3.6);
}
float KpMmin(float speed){
	return((speed*1000)/60);
}
float KpMh(float speed){
	return(speed*1000);
}
float KpKmin(float speed){
	return(speed/60);
}
float KpKs(float speed){
	return((speed/60)/60);
}
float KminpKs(float speed){
	return(speed/60);
}
float MpK(float speed){
	return(speed*3.6);
}
float MpMmin(float speed){
	return(speed*60);
}
float MpMh(float speed){
	return(speed*60*60);
}
float Mapm(float speed){
	return (speed*340.29);
}
float MapK(float speed){
	return(speed*1225.044);
}
float MapC(float speed){
	return(speed/880991.1);
}
float CpMa(float speed){
	return(speed*880991.1);
}
float Cpm(float speed){
	return(speed*299792458);
}
float CpK(float speed){
	return(speed*1079252849);
}
float mpcm(float speed){
	return(speed*100);
}
float cmpm (float speed){
	return(speed/100);
}
float cmpK(float speed){
	return(speed*0.036);
}
float cmpcmin(float speed){
	return(speed/60);
}
float cmhpcmin(float speed){
	return(speed*60);
}
float cminpcmh(float speed){
	return(speed/60);
}
float mphpmpm(float speed){
	return(speed*60);
}
float mphpmps(float speed){
	return(speed*3600);
}
float mpmpmps(float speed){
	return(speed*60);
}
float mpspmpm(float speed){
	return(speed/60);
}
float mpspm(float speed){
	return(speed*1609.344);
}
float mpmpmmin(float speed){
	return(speed*1609.344);
}
float mphpK(float speed){
	return(speed*1.609344);
}
float fpspfpm(float speed){
	return(speed/60);
}
float fpmpfph(float speed){
	return(speed/60);
}
float fphpfps(float speed){
	return(speed*3600);
}
float fphpK(float speed){
	return(speed*0.0003048);
}
float fpmpmmin(float speed){
	return(speed*0.3048);
}
float fpspm(float speed){
	return(speed*0.3048);
}
float nmpmph(float speed){
	return(speed*1.1507784538296);
}
float nmpK(float speed){
	return(speed*1.8519984);
}
float nmpm(float speed){
	return(speed*0.514444);
}
float mphpnm(float speed){
	return(speed/1.1507784538296);
}
float Kpnm(float speed){
	return(speed/1.8519984);
}
float nmpKn(float speed){
	return(speed);
}
float KnpK(float speed){
	return(speed*1.8519984);
}
float Knpm(float speed){
	return(speed*0.514444);
}
float Knpnm(float speed){
	return(speed);
}
float Knpfps(float speed){
	return(speed*1.6878083989501);
}
float iphpipm(float speed){
	return(speed/60);
}
float ipmpips(float speed){
	return(speed/60);
}
float ipspiph(float speed){
	return(speed*3600);
}
float iphpBft(float speed){
	return(speed*0.00041452265174368);
}
int main(void){
	unsigned int CPAGE_UTF8=65001;
	unsigned int CPAGE_DEFAULT= GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);

	float Velocidade;
	int resp=printmenu();
	int resp2;
	switch(resp){
		case 1: {
			printf("\n Informe a Velocidade em Km/h: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f km/h equivale a %.2f m/s\n", Velocidade, KpM(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
			}
		case 2:{
			printf("\n Informe a Velocidade em Km/h: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f km/h equivale a %.2f m/min\n", Velocidade, KpMmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 3:{
			printf("\n Informe a Velocidade em Km/h: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f km/h equivale a %.2f m/h\n", Velocidade, KpMh(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 4:{
			printf("\n Informe a Velocidade em Km/h:");
			scanf("%f", &Velocidade);
			printf("\n %.2f Km/h equivale a %.2f Km/min\n", Velocidade, KpKmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 5:{
			printf("\n Informe a Velocidade em Km/h:");
			scanf("%f", &Velocidade);
			printf("\n %.2f Km/h equivale a %.2f Km/s\n", Velocidade, KpKs(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 6:{
			printf("\n Informe a Velocidade em Km/min:");
			scanf("%f", &Velocidade);
			printf("\n %.2f km/min equivale a %.2f Km/s\n", Velocidade, KminpKs(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 7:{
			printf("\n Informe a Velocidade em m/s:");
			scanf("%f", &Velocidade);
			printf("\n %.2f m/s equivale a %.2f Km/h\n", Velocidade, MpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 8:{
			printf("\n Informe a Velocidade em m/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f m/s equivale a %.2f m/min\n", Velocidade, MpMmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 9:{
			printf("\n Informe a Velocidade em m/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f m/s equivale a %.2f m/h\n", Velocidade, MpMh(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 10:{
			printf("\n Informe a Velocidade em m/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f m/s equivale a %.2f cm/s\n", Velocidade, CpMa(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 11:{
			printf("\n Informe a Velocidade em C: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em C equivale a %.2f em mach 1\n", Velocidade, CpMa(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 12:{
			printf("\n Informe a Velocidade em C: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em C equivale a %.2f m/s\n", Velocidade, Cpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;}
		case 13:{
			printf("\n Informe a Velocidade em C: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em C equivale a %.2f Km/h\n", Velocidade, CpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;}
		case 14:{
			printf("\n Informe a Velocidade em mach 1: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em mach 1 equivale a %.12f C\n", Velocidade, MapC(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;}
		case 15:{
			printf("\n Informe a Velocidade em mach 1: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em mach 1 equivale a %.2f m/s\n", Velocidade, Mapm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 16:{
			printf("\n Informe a Velocidade em mach 1: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em mach 1 equivale a %.2f Km/h\n", Velocidade, MapK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 17:{
			printf("\n Informe a Velocidade em mph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mph equivalem a %.2f mpm\n", Velocidade, mphpmpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 18:{
			printf("\n Informe a Velocidade em mph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mph equivalem a %.2f mps\n", Velocidade, mphpmps(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 19:{
			printf("\n Informe a Velocidade em mpm: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mpm equivalem a %.2f mps\n", Velocidade, mpmpmps(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 20:{
			printf("\n Informe a Velocidade em mps: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mps equivalem a %.2f mpm\n", Velocidade, mpspmpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 21:{
			printf("\n Informe a Velocidade em mps: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mps equivalem a %.2f m/s\n", Velocidade, mpspm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 22:{
			printf("\n Informe a Velocidade em mpm: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mpm equivalem a %.2f m/min\n", Velocidade, mpmpmmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 23:{
			printf("\n Informe a Velocidade em mph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mph equivalem a %.2f Km/h\n", Velocidade, mphpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 24:{
			printf("\n Informe a Velocidade em cm/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em cm/s equivale a %.2f m/s\n", Velocidade, Cpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 25:{
			printf("\n Informe a Velocidade em cm/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em cm/s equivale a %.3f Km/h\n", Velocidade, cmpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 26:{
			printf("\n Informe a Velocidade em cm/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em cm/s equivale a %.2f cm/min\n", Velocidade, cmpcmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 27:{
			printf("\n Informe a Velocidade em cm/h: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em cm/h equivale a %.2f cm/min\n", Velocidade, cmhpcmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 28:{
			printf("\n Informe a Velocidade em cm/min: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em cm/min equivale a %.2f cm/h\n", Velocidade, cminpcmh(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 29:{
			printf("\n Informe a Velocidade em fps: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fps equivalem a %.2f fpm\n", Velocidade, fpspfpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 30:{
			printf("\n Informe a Velocidade em fpm: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fpm equivalem a %.2f fph\n", Velocidade, fpmpfph(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 31:{
			printf("\n Informe a Velocidade em fph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fph equivalem a %.2f fps\n", Velocidade, fphpfps(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 32:{
			printf("\n Informe a Velocidade em fph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fph equivalem a %.3f Km/h\n", Velocidade, fphpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 33:{
			printf("\n Informe a Velocidade em fpm: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fpm equivalem a %.2f m/min\n", Velocidade, fpmpmmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 34:{
			printf("\n Informe a Velocidade em fps: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fps equivalem a %.2f m/s\n", Velocidade, fpspm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 35:{
			printf("\n Informe a Velocidade em milhas náuticas: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f nm/h equivalem a %.2f mph\n", Velocidade, nmpmph(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 36:{
			printf("\n Informe a Velocidade em milhas náuticas: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f nm/h equivalem a %.2f Km/s\n", Velocidade, nmpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 37:{
			printf("\n Informe a Velocidade em milhas náuticas: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f nm/h equivalem a %.2f m/s\n", Velocidade, nmpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 38:{
			printf("\n Informe a Velocidade em mph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mph equivalem a %.2f nm/h\n", Velocidade, mphpnm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 39:{
			printf("\n Informe a Velocidade em Km/h: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f Km/h equivalem a %.2f nm/h\n", Velocidade, Kpnm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 40:{
			printf("\n Informe a Velocidade em milhas náuticas: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f nm/h equivalem a %.2f Kn\n", Velocidade, nmpKn(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 41:{
			printf("\n Informe a Velocidade em Nós: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f Kn equivalem a %.2f Km/h\n", Velocidade, KnpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 42:{
			printf("\n Informe a Velocidade em Nós: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f Kn equivalem a %.2f m/s\n", Velocidade, KnpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 43:{
			printf("\n Informe a Velocidade em Nós: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f Kn equivalem a %.2f nm/h\n", Velocidade, Knpnm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 44:{
			printf("\n Informe a Velocidade em Nós: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f Kn equivalem a %.2f fps\n", Velocidade, Knpfps(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 45:{
			printf("\n Informe a Velocidade em polegadas por hora: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f iph equivalem a %.2f ipm\n", Velocidade, iphpipm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 46:{
			printf("\n Informe a Velocidade em polegadas por minuto: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f ipm equivalem a %.2f ips\n", Velocidade, ipmpips(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 47:{
			printf("\n Informe a Velocidade em polegadas por segundo: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f ips equivalem a %.2f iph\n", Velocidade, ipspiph(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 48:{
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		default: {
			printf("\n ************** \n");
			printf("\a Opção inválida.  ");
			break;
		 }
	}
	while(resp!=48){
	float Velocidade;
	while(resp2!=2){
		printf("\n ***********************************");
	    printf("\n * Deseja fazer mais uma conversão?*");
		printf("\n *          SiM --> 1              *");
		printf("\n *          Não --> 2              *");
		printf("\n ***********************************");
		printf("\n");
		scanf("%d",&resp2);
		
	if(resp2==1){
		int resp=printmenu();
		switch(resp){
		case 1: {
			printf("\n Informe a Velocidade em Km/h: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f km/h equivale a %.2f m/s\n", Velocidade, KpM(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
			}
		case 2:{
			printf("\n Informe a Velocidade em Km/h: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f km/h equivale a %.2f m/min\n", Velocidade, KpMmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 3:{
			printf("\n Informe a Velocidade em Km/h: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f km/h equivale a %.2f m/h\n", Velocidade, KpMh(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 4:{
			printf("\n Informe a Velocidade em Km/h:");
			scanf("%f", &Velocidade);
			printf("\n %.2f Km/h equivale a %.2f Km/min\n", Velocidade, KpKmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 5:{
			printf("\n Informe a Velocidade em Km/h:");
			scanf("%f", &Velocidade);
			printf("\n %.2f Km/h equivale a %.2f Km/s\n", Velocidade, KpKs(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 6:{
			printf("\n Informe a Velocidade em Km/min:");
			scanf("%f", &Velocidade);
			printf("\n %.2f km/min equivale a %.2f Km/s\n", Velocidade, KminpKs(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 7:{
			printf("\n Informe a Velocidade em m/s:");
			scanf("%f", &Velocidade);
			printf("\n %.2f m/s equivale a %.2f Km/h\n", Velocidade, MpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 8:{
			printf("\n Informe a Velocidade em m/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f m/s equivale a %.2f m/min\n", Velocidade, MpMmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 9:{
			printf("\n Informe a Velocidade em m/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f m/s equivale a %.2f m/h\n", Velocidade, MpMh(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 10:{
			printf("\n Informe a Velocidade em m/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f m/s equivale a %.2f cm/s\n", Velocidade, CpMa(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 11:{
			printf("\n Informe a Velocidade em C: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em C equivale a %.2f em mach 1\n", Velocidade, CpMa(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 12:{
			printf("\n Informe a Velocidade em C: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em C equivale a %.2f m/s\n", Velocidade, Cpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;}
		case 13:{
			printf("\n Informe a Velocidade em C: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em C equivale a %.2f Km/h\n", Velocidade, CpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;}
		case 14:{
			printf("\n Informe a Velocidade em mach 1: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em mach 1 equivale a %.12f C\n", Velocidade, MapC(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;}
		case 15:{
			printf("\n Informe a Velocidade em mach 1: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em mach 1 equivale a %.2f m/s\n", Velocidade, Mapm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 16:{
			printf("\n Informe a Velocidade em mach 1: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em mach 1 equivale a %.2f Km/h\n", Velocidade, MapK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 17:{
			printf("\n Informe a Velocidade em mph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mph equivalem a %.2f mpm\n", Velocidade, mphpmpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 18:{
			printf("\n Informe a Velocidade em mph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mph equivalem a %.2f mps\n", Velocidade, mphpmps(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 19:{
			printf("\n Informe a Velocidade em mpm: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mpm equivalem a %.2f mps\n", Velocidade, mpmpmps(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 20:{
			printf("\n Informe a Velocidade em mps: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mps equivalem a %.2f mpm\n", Velocidade, mpspmpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 21:{
			printf("\n Informe a Velocidade em mps: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mps equivalem a %.2f m/s\n", Velocidade, mpspm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 22:{
			printf("\n Informe a Velocidade em mpm: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mpm equivalem a %.2f m/min\n", Velocidade, mpmpmmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 23:{
			printf("\n Informe a Velocidade em mph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mph equivalem a %.2f Km/h\n", Velocidade, mphpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 24:{
			printf("\n Informe a Velocidade em cm/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em cm/s equivale a %.2f m/s\n", Velocidade, Cpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 25:{
			printf("\n Informe a Velocidade em cm/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em cm/s equivale a %.3f Km/h\n", Velocidade, cmpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 26:{
			printf("\n Informe a Velocidade em cm/s: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em cm/s equivale a %.2f cm/min\n", Velocidade, cmpcmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 27:{
			printf("\n Informe a Velocidade em cm/h: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em cm/h equivale a %.2f cm/min\n", Velocidade, cmhpcmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 28:{
			printf("\n Informe a Velocidade em cm/min: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f em cm/min equivale a %.2f cm/h\n", Velocidade, cminpcmh(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 29:{
			printf("\n Informe a Velocidade em fps: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fps equivalem a %.2f fpm\n", Velocidade, fpspfpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 30:{
			printf("\n Informe a Velocidade em fpm: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fpm equivalem a %.2f fph\n", Velocidade, fpmpfph(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 31:{
			printf("\n Informe a Velocidade em fph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fph equivalem a %.2f fps\n", Velocidade, fphpfps(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 32:{
			printf("\n Informe a Velocidade em fph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fph equivalem a %.3f Km/h\n", Velocidade, fphpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 33:{
			printf("\n Informe a Velocidade em fpm: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fpm equivalem a %.2f m/min\n", Velocidade, fpmpmmin(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 34:{
			printf("\n Informe a Velocidade em fps: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f fps equivalem a %.2f m/s\n", Velocidade, fpspm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 35:{
			printf("\n Informe a Velocidade em milhas náuticas: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f nm/h equivalem a %.2f mph\n", Velocidade, nmpmph(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 36:{
			printf("\n Informe a Velocidade em milhas náuticas: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f nm/h equivalem a %.2f Km/s\n", Velocidade, nmpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 37:{
			printf("\n Informe a Velocidade em milhas náuticas: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f nm/h equivalem a %.2f m/s\n", Velocidade, nmpm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 38:{
			printf("\n Informe a Velocidade em mph: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f mph equivalem a %.2f nm/h\n", Velocidade, mphpnm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 39:{
			printf("\n Informe a Velocidade em Km/h: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f Km/h equivalem a %.2f nm/h\n", Velocidade, Kpnm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 40:{
			printf("\n Informe a Velocidade em milhas náuticas: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f nm/h equivalem a %.2f Kn\n", Velocidade, nmpKn(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 41:{
			printf("\n Informe a Velocidade em Nós: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f Kn equivalem a %.2f Km/h\n", Velocidade, KnpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 42:{
			printf("\n Informe a Velocidade em Nós: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f Kn equivalem a %.2f m/s\n", Velocidade, KnpK(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 43:{
			printf("\n Informe a Velocidade em Nós: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f Kn equivalem a %.2f nm/h\n", Velocidade, Knpnm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 44:{
			printf("\n Informe a Velocidade em Nós: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f Kn equivalem a %.2f fps\n", Velocidade, Knpfps(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 45:{
			printf("\n Informe a Velocidade em polegadas por hora: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f iph equivalem a %.2f ipm\n", Velocidade, iphpipm(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 46:{
			printf("\n Informe a Velocidade em polegadas por minuto: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f ipm equivalem a %.2f ips\n", Velocidade, ipmpips(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 47:{
			printf("\n Informe a Velocidade em polegadas por segundo: ");
			scanf("%f", &Velocidade);
			printf("\n %.2f ips equivalem a %.2f iph\n", Velocidade, ipspiph(Velocidade));
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		case 48:{
			printf("\n\t *******");
			printf("\n\t\a * FIM *");
			printf("\n\t *******");
			break;
		}
		default: {
			printf("\n ************** \n");
			printf("\a Opção inválida.  ");
			break;
		} 
	}
	}
	else   printf("\n\t *******");
		   printf("\n\t\a * FIM *");
		   printf("\n\t *******");
		   break;
		   }
}
return 0;
	getch();
	SetConsoleOutputCP(CPAGE_DEFAULT);
	}