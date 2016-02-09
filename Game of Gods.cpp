#include <iostream>
#include <unistd.h>
#include <time.h>


using namespace std;
int main() {
	string Player;
	int GodChoice;
	int DefenseChoice;
	int AttackChoice;
	int GoBack = 0;
	int Continue = 0;
	int FirstTimeHint = 0;
	int GodRealmMainMenuExplore = 0;
	int GodRealmMainMenuNavA;
	int GodRealmMainMenuNav;
	int LifeHomeA = 0;
	int DeathHomeA = 0;
	int NatureHomeA = 0;
	int FireHomeA = 0;
	int CalamityHomeA = 0;
	int GodRealmCentreA = 0;
	int OldManGodRealmA;
	int OldManGodRealmB = 0;
	int OldManGodRealmC = 0;
	int EarthRealmVortexA = 0;
	int EnterVortex;
	int EarthRealmA = 0;
	int HouseHint = 0;
	int LifeHouse;
	int NatureHouse;
	int FireHouse;
	int DeathHouse;
	int CalamityHouse;
	int HistoryBookA = 0;
	int InvetoryA = 0;
	int RestReady = 1;
	int EarthVisit = 0;
	int EarthRand;
	int EarthOcean = 0;
	int EarthDesert = 0;
	int EarthCity = 0;
	int EarthCountry = 0;
	int GodRealmCentreChestE = 0;
	int GodRealmCentreMenuNav;
	int WeaponTrain = 0;
	int InvetoryTrainerSword = 0;
	int InvetoryGoback;
	int AppleTreeVisit = 0;
	int GodRealmPlainVisit = 0;
	int GoldGodDagger = 0;
	int ArmoryMainA = 0;
	int ArmoryMenu;
	string Equip;
	int WeaponTrainerHealth = 20;
	int WeaponTrainerAttack = 20;
	int WeaponTrainIntro = 0;
	bool WeaponTrainerDazed;
	int GodRealmCentrePlain = 0;
	int LParry = 60;
	int FParry = 70;
	int NParry = 90;
	int DParry = 80;
	int CParry = 100;
	int LBlock = 30;
	int NBlock = 50;
	int FBlock = 40;
	int DBlock = 40;
	int CBlock = 60;
	int LStab = 10;
	int FStab = 30;
	int NStab = 40;
	int DStab = 30;
	int CStab = 50;
	int LSwipe = 20;
	int FSwipe = 40;
	int NSwipe = 50;
	int DSwipe = 40;
	int CSwipe = 60;
	int LBlunt = 10;
	int FBlunt = 20;
	int NBlunt = 25;
	int DBlunt = 20;
	int CBlunt = 30;
	int LifeDisarm;
	int NatureDisarm;
	int FireDisarm;
	int DeathDisarm;
	int CalamityDisarm;
	int LifeCounterAttack;
	int NatureCounterAttack;
	int FireCounterAttack;
	int DeathCounterAttack;
	int CalamityCounterAttack;
	int LifeDodgeAttack;
	int FireDodgeAttack;
	int NatureDodgeAttack;
	int DeathDodgeAttack;
	int CalamityDodgeAttack;
	int LKills = 0;
	int LFame = 0;
	int LHate = 0;
	int LHealth = 0;
	int LBelief = 0;
	int FKills = 0;
	int FFame = 0;
	int FHate = 0;
	int FHealth = 0;
	int FBelief = 0;
	int NKills = 0;
	int NFame = 0;
	int NHate = 0;
	int NHealth = 0;
	int NBelief = 0;
	int DKills = 0;
	int DFame = 0;
	int DHate = 0;
	int DHealth = 0;
	int DBelief = 0;
	int CKills = 0;
	int CFame = 0;
	int CHate = 0;
	int CHealth = 0;
	int CBelief = 0;
	int LAttack = 0;
	int FAttack = 0;
	int NAttack = 5;
	int DAttack = 0;
	int CAttack = 10;
	int CurrentlyEquiped = 0;
	int ArmoryReturn = 0;
	int TrainerSwordDiscovered = 0;
	int GoldDaggerDiscovered = 0;
	EarthRand = rand() % 4;
	cout << "Welcome to the Game of Gods" << endl;
	cout << "First we are going to need to know what to call you." << endl;
	cout << "Please enter your name: " << endl;
	std::getline(std::cin, Player);
	
	GodSelectMenu:
		cout << "Well " << Player << " it seems our fates have intertwined and you shall inherit unimaginable power. Use it wisely" << endl;
		sleep(2);
		cout << "As a new god you will get to select what type of god you want to be" << endl;
		sleep(2);
		cout << "So what is it?" << endl;
		cout << "Type the number of the god you would like to be" << endl;
		cout << "(1) God of Life" << endl;
		cout << "(2) God of Fire" << endl;
		cout << "(3) God of Nature" << endl;
		cout << "(4) God of Death" << endl;
		cout << "(5) God of Calamity" << endl;
		cout << "(6) READ A DESCRIPTION OF ALL THE GODS" << endl;
		cin >> GodChoice;
		if (GodChoice == 1 )
			{
				cout << "Well God of life, your journey now begins." << endl;
				sleep(2);
				goto IntroMenu;
			}
		if (GodChoice == 2 )
			{
				cout << "God of Fire your journey begins here good luck" << endl;
				sleep(2);
				goto IntroMenu;
			}
		if (GodChoice == 3 )
			{
				cout << "Mother of Nature, this is were you begin" << endl;
				sleep(2);
				goto IntroMenu;
			}
		if (GodChoice == 4 )
			{
				cout << "God of Death..." << endl;
				sleep(2);
				goto IntroMenu;
			}
		if (GodChoice == 5)
			{
				cout << "God of Calamity, good luck in battle" << endl;
				sleep(2);
				goto IntroMenu;
			}
		if (GodChoice == 6)
			{
				goto Description;
			}
		else 
			{
				cout << "Please enter a valid number" << endl;
				goto GodSelectMenu;
			}	
	Description:
		cout << "The God of life spreads gentleness and well being. While being one of the most powerful forces in the world, it comes with a heavy price" << endl;
		cout << "The God of Fire can control heat and fire in the space around them. This power can be used for noble feats and devious devices" << endl;
		cout << "The God of Nature is connected to world around them. This connection grants the ability to the God to use nature to their will but you also feel natures pain" << endl;
		cout << "The God of Death has only one purpose, to .... and ... whomever and whatever he chooses" << endl;
		cout << "The God of Calamity is a warrior with the ablilty to wipe out entire armies, unfortunatley he is not popular with the people" << endl;
		cout << "type (1) to return" << endl;
		cin >> GoBack;
		if (GoBack == 1)
		{
			goto GodSelectMenu;
			GoBack = 0;
		}
		else 
		{
			cout << "Enter a valid number" << endl;
			goto Description;
		}
		
	IntroMenu:
		if(GodChoice == 1)
			{
				LFame += 90;
				LHate += 0;
				LHealth += 50;
				LBelief += 100;
				cout << "As a God of life Fame and belief come easy for you, as long as people live you will live" << endl;
				sleep(2);
				cout << "Unfortunatley you are a weaker being as you have had to sacrifice part of your own life force to share with others" << endl;
				sleep(2);
				cout << "Also taking life from others is very difficult for you" << endl;
				sleep(2);
				cout << "Remeber Fame can come from both good and bad deeds" << endl;
				cout << "Stats" << endl;
				cout << "Kills: " << LKills << endl;
				cout << "Belief: " << LBelief << endl;
				cout << "Hate: " << LHate << endl;
				cout << "Health: " << LHealth << endl;
				cout << "Fame: " << LFame << endl;
				sleep(5);
				cout << "As you can see above all of your current status, this is only viewable either when you are in the Gods Realm or meditating where ever you are" <<endl;
				sleep(2);
				cout << "Currently you are in the Realm of Gods if you couldn't already tell" << endl;
				sleep(2);
				cout << "You may have many questions, I know but you will have to answer them for yourself" << endl;
				sleep(2);
				cout << "I will be sending you on your way now, good luck " << Player << " God of Life" << endl;
				cout << "...." << endl;
				cout << "Type (1) to continue" << endl;
				cin >> Continue;
				if (Continue == 1)
				{
					goto GodRealmMainMenu;
					Continue -= 1;
				}
				else
				{
					while (Continue != 1)
					{
						cout << "Please Enter a valid number" << endl;
						cin >> Continue;
					}
				}
				goto GodRealmMainMenu;
			}
		
		if(GodChoice == 2)
			{
				FFame += 70;
				FHate += 30;
				FHealth += 100;
				FBelief += 40;
				cout << "As a God of Fire most people will acknowledge your existence but don't know exactly who you are" << endl;
				sleep(2);
				cout << "You are very powerful with very prodigious powers, You have taimed fire and can make it do as you will" << endl;
				sleep(2);
				cout << "You are not naturally gifted at combat but you are fit if the time comes" << endl;
				sleep(2);
				cout << "Remeber Fame can come from both good and bad deeds" << endl;
				cout << "Stats" << endl;
				cout << "Kills: " << FKills << endl;
				cout << "Belief: " << FBelief << endl;
				cout << "Hate: " << FHate << endl;
				cout << "Health: " << FHealth << endl;
				cout << "Fame: " << FFame << endl;
				sleep(5);
				cout << "As you can see above all of your current status, this is only viewable either when you are in the Gods Realm or meditating where ever you are" <<endl;
				sleep(2);
				cout << "Currently you are in the Realm of Gods if you couldn't already tell" << endl;
				sleep(2);
				cout << "You may have many questions, I know but you will have to answer them for yourself" << endl;
				sleep(2);
				cout << "I will be sending you on your way now, be strong " << Player << " God of Fire" << endl;
				cout << "...." << endl;
				cout << "Type (1) to continue" << endl;
				cin >> Continue;
				if (Continue == 1)
				{
					goto GodRealmMainMenu;
					Continue -= 1;
				}
				else
				{
					while (Continue != 1)
					{
						cout << "Please Enter a valid number" << endl;
						cin >> Continue;
					}
				}
				goto GodRealmMainMenu;

			}
		if(GodChoice == 3)
			{
				NFame += 80;
				NHate += 10;
				NHealth += 80;
				NBelief += 70;
				cout << "As a God of Nature, you may be the most well known God but not all people care for nature and in turn destroy it" << endl;
				sleep(2);
				cout << "Suprisingly you are a very skilled fighter with all the instincts of that an animal would have and with nature as an ally you are a very powerful force in this world" << endl;
				sleep(2);
				cout << "You are either neglected or loved by people, remember the pain that nature feels you feel as well. This is a very large burden" << endl;
				sleep(2);
				cout << "Remeber Fame can come from both good and bad deeds" << endl;
				cout << "Stats" << endl;
				cout << "Kills: " << NKills << endl;
				cout << "Belief: " << NBelief << endl;
				cout << "Hate: " << NHate << endl;
				cout << "Health: " << NHealth << endl;
				cout << "Fame: " << NFame << endl;
				sleep(5);
				cout << "As you can see above all of your current status, this is only viewable either when you are in the Gods Realm or meditating where ever you are" <<endl;
				sleep(2);
				cout << "Currently you are in the Realm of Gods if you couldn't already tell" << endl;
				sleep(2);
				cout << "You may have many questions, I know but you will have to answer them for yourself" << endl;
				sleep(2);
				cout << "I will be sending you on your way now, fare well " << Player << " God of Nature" << endl;
				cout << "...." << endl;
				cout << "Type (1) to continue" << endl;
				cin >> Continue;
				if (Continue == 1)
				{
					goto GodRealmMainMenu;
					Continue -= 1;
				}
				else
				{
					while (Continue != 1)
					{
						cout << "Please Enter a valid number" << endl;
						cin >> Continue;
					}
				}
				goto GodRealmMainMenu;

			}
		if(GodChoice == 4)
			{
				DFame += 100;
				DHate += 90;
				DHealth += 90;
				DBelief += 30;
				cout << "God of Death, you are the most infamous God yet the most hated. You dawn an ugly figure and strike fear into the people you see" << endl;
				sleep(2);
				cout << "Your abilities are unrivaled by other Gods but there is a price for every life you take" << endl;
				sleep(2);
				cout << "People naturally loathe a Death God and most refuse to believe such a being could exist" << endl;
				sleep(2);
				cout << "Remeber Fame can come from both good and bad deeds" << endl;
				cout << "Stats" << endl;
				cout << "Kills: " << DKills << endl;
				cout << "Belief: " << DBelief << endl;
				cout << "Hate: " << DHate << endl;
				cout << "Health: " << DHealth << endl;
				cout << "Fame: " << DFame << endl;
				sleep(5);
				cout << "As you can see above all of your current status, this is only viewable either when you are in the Gods Realm or meditating where ever you are" <<endl;
				sleep(2);
				cout << "Currently you are in the Realm of Gods if you couldn't already tell" << endl;
				sleep(2);
				cout << "You may have many questions, I know but you will have to answer them for yourself" << endl;
				sleep(2);
				cout << "I will be sending you on your way now, stay wary " << Player << " God of Death" << endl;
				sleep(2);
				cout << "...." << endl;
				cout << "Type (1) to continue" << endl;
				cin >> Continue;
				if (Continue == 1)
				{
					goto GodRealmMainMenu;
					Continue -= 1;
				}
				else
				{
					while (Continue != 1)
					{
						cout << "Please Enter a valid number" << endl;
						cin >> Continue;
					}
				}
			}
		if(GodChoice == 5)
			{
				CFame += 100;
				CHate += 40;
				CHealth += 120;
				CBelief += 80;
				cout << "A God of Calamity, adorned by prestige and fierce like a lion. You are craved by any powerful leader to serve in their ranks" << endl;
				sleep(2);
				cout << "You have an extreme natural ability to fight and kill, you are also a natural born leader" << endl;
				sleep(2);
				cout << "You are worshiped by most for your strength and ability" << endl;
				sleep(2);
				cout << "Remeber Fame can come from both good and bad deeds" << endl;
				cout << "Stats" << endl;
				cout << "Kills: " << CKills << endl;
				cout << "Belief: " << CBelief << endl;
				cout << "Hate: " << CHate << endl;
				cout << "Health: " << CHealth << endl;
				cout << "Fame: " << CFame << endl;
				sleep(5);
				cout << "As you can see above all of your current status, this is only viewable either when you are in the Gods Realm or meditating where ever you are" <<endl;
				sleep(2);
				cout << "Currently you are in the Realm of Gods if you couldn't already tell" << endl;
				sleep(2);
				cout << "You may have many questions, I know but you will have to answer them for yourself" << endl;
				sleep(2);
				cout << "I will be sending you on your way now, stay well " << Player << " God of Calamity" << endl;
				cout << "...." << endl;
				cout << "Type (1) to continue" << endl;
				cin >> Continue;
				if (Continue == 1)
				{
				goto GodRealmMainMenu;
				Continue -= 1;
				}
				else
				{
					while (Continue != 1)
					{
						cout << "Please Enter a valid number" << endl;
						cin >> Continue;
					}
				}
				goto GodRealmMainMenu;
			}
			
	GodRealmMainMenu:
		{
			cout << "You have entered the Realm of Gods" << endl;
			if (FirstTimeHint == 0)
			{
				cout << "You see a smooth sullen world made of marble and glass structures covered by plumes of puffy clouds" << endl;
				sleep(2);
				cout << "As an official God you now have a home in the Realm of Gods" << endl;
				sleep(2);
				cout << "You can check your status here anytime you would like" << endl;
				sleep(2);
				cout << "You should also go talk with other Gods and make some acquaintances" << endl;
				sleep(2);
				cout << "Well good luck" << endl;
				sleep(2);
				FirstTimeHint += 1;
				goto GodRealmChoiceMenu;
			}
			else
			{
 				goto GodRealmChoiceMenu;
			}
	GodRealmChoiceMenu:
			cout << "What would you like to do?" << endl;
			sleep(2);
			cout << "Type the number of what option you would like to choose" << endl;
			sleep(2);
			if (GodRealmMainMenuExplore == 0)
			{
					cout << "Go to your home (1)" << endl;
					cout << "Visit the God Realms centre (2)" << endl;
					cout << "Explore the violet purple hole (3)" << endl;
					cout << "View your stats (4)" << endl;
					cin >> GodRealmMainMenuNavA;
					if (GodRealmMainMenuNavA == 1)
						{
							
							if (GodChoice == 1)
							{
								goto LifeHome;
							}
							if (GodChoice == 2)
							{
								goto FireHome;
							}
							if (GodChoice == 3)
							{
								goto NatureHome;
							}
							if (GodChoice == 4)
							{
								goto DeathHome;
							}
							if (GodChoice == 5)
							{
								goto CalamityHome;
							}
						}
						if (GodRealmMainMenuNavA == 2)
						{
							goto GodRealmCentre;
						}
						if (GodRealmMainMenuNavA == 4)
						{
							cout << "Stats" << endl;
							if (GodChoice == 1)
							{
								cout << "Stats" << endl;
								cout << "Kills: " << LKills << endl;
								cout << "Belief: " << LBelief << endl;
								cout << "Hate: " << LHate << endl;
								cout << "Health: " << LHealth << endl;
								cout << "Fame: " << LFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto GodRealmMainMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

							}
							if (GodChoice == 2)
							{
								cout << "Stats" << endl;
								cout << "Kills: " << FKills << endl;
								cout << "Belief: " << FBelief << endl;
								cout << "Hate: " << FHate << endl;
								cout << "Health: " << FHealth << endl;
								cout << "Fame: " << FFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto GodRealmMainMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}


							}
							if (GodChoice == 3)
							{
								cout << "Stats" << endl;
								cout << "Kills: " << NKills << endl;
								cout << "Belief: " << NBelief << endl;
								cout << "Hate: " << NHate << endl;
								cout << "Health: " << NHealth << endl;
								cout << "Fame: " << NFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto GodRealmMainMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}


							}
							if (GodChoice == 4)
							{
								cout << "Stats" << endl;
								cout << "Kills: " << DKills << endl;
								cout << "Belief: " << DBelief << endl;
								cout << "Hate: " << DHate << endl;
								cout << "Health: " << DHealth << endl;
								cout << "Fame: " << DFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto GodRealmMainMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

							}
							if (GodChoice == 5)
							{
								cout << "Stats" << endl;
								cout << "Kills: " << CKills << endl;
								cout << "Belief: " << CBelief << endl;
								cout << "Hate: " << CHate << endl;
								cout << "Health: " << CHealth << endl;
								cout << "Fame: " << CFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto GodRealmMainMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

								
							}

						}
						
						if (GodRealmMainMenuNavA == 3)
						{
							
							goto EarthRealmVortex;
						}
					
				
						else
						{
							cout << "Please enter a valid number" << endl;
							sleep(2);
							goto GodRealmMainMenu;
						}		
				}	
				
				if (GodRealmMainMenuExplore == 1)
				{
					
					cout << "Go to your home (1)" << endl;
					cout << "Visit the God Realms centre (2)" << endl;
					cout << "Go to the Earth Realm (3)" << endl;
					cout << "View your stats (4)" << endl;
					cin >> GodRealmMainMenuNav;
					if (GodRealmMainMenuNav == 1)
					{
						if (GodChoice == 1)
						{
							goto LifeHome;
						}
						if (GodChoice == 2)
						{
							goto FireHome;
						}
						if (GodChoice == 3)
						{
							goto NatureHome;
						}
						if (GodChoice == 4)
						{
							goto DeathHome;
						}
						if (GodChoice == 5)
						{
							goto CalamityHome;
						}
					}
					if (GodRealmMainMenuNav == 2)
					{
						goto GodRealmCentre;
					}
					if (GodRealmMainMenuNav == 3)
					{
						goto EarthRealmVortex;
					}
					if (GodRealmMainMenuNav == 4)
					{
						cout << "Stats" << endl;
						if (GodChoice == 1)
						{
							cout << "Stats" << endl;
							cout << "Kills: " << LKills << endl;
							cout << "Belief: " << LBelief << endl;
							cout << "Hate: " << LHate << endl;
							cout << "Health: " << LHealth << endl;
							cout << "Fame: " << LFame << endl;
							cout << "To return type (1)" << endl;
							cin >> Continue;
							if (Continue == 1)
							{
							goto GodRealmMainMenu;
							Continue -= 1;
							}
							else
							{
								while (Continue != 1)
								{
									cout << "Please Enter a valid number" << endl;
									cin >> Continue;
								}
							}

						}
						if (GodChoice == 2)
						{
							cout << "Stats" << endl;
							cout << "Kills: " << FKills << endl;
							cout << "Belief: " << FBelief << endl;
							cout << "Hate: " << FHate << endl;
							cout << "Health: " << FHealth << endl;
							cout << "Fame: " << FFame << endl;
							cout << "To return type (1)" << endl;
							cin >> Continue;
							if (Continue == 1)
							{
							goto GodRealmMainMenu;
							Continue -= 1;
							}
							else
							{
								while (Continue != 1)
								{
									cout << "Please Enter a valid number" << endl;
									cin >> Continue;
								}
							}


						}
						if (GodChoice == 3)
						{
							cout << "Stats" << endl;
							cout << "Kills: " << NKills << endl;
							cout << "Belief: " << NBelief << endl;
							cout << "Hate: " << NHate << endl;
							cout << "Health: " << NHealth << endl;
							cout << "Fame: " << NFame << endl;
							cout << "To return type (1)" << endl;
							cin >> Continue;
							if (Continue == 1)
							{
							goto GodRealmMainMenu;
							Continue -= 1;
							}
							else
							{
								while (Continue != 1)
								{
									cout << "Please Enter a valid number" << endl;
									cin >> Continue;
								}
							}


						}
						if (GodChoice == 4)
						{
							cout << "Stats" << endl;
							cout << "Kills: " << DKills << endl;
							cout << "Belief: " << DBelief << endl;
							cout << "Hate: " << DHate << endl;
							cout << "Health: " << DHealth << endl;
							cout << "Fame: " << DFame << endl;
							cout << "To return type (1)" << endl;
							cin >> Continue;
							if (Continue == 1)
							{
							goto GodRealmMainMenu;
							Continue -= 1;
							}
							else
							{
								while (Continue != 1)
								{
									cout << "Please Enter a valid number" << endl;
									cin >> Continue;
								}
							}

						}
						if (GodChoice == 5)
						{
							cout << "Stats" << endl;
							cout << "Kills: " << CKills << endl;
							cout << "Belief: " << CBelief << endl;
							cout << "Hate: " << CHate << endl;
							cout << "Health: " << CHealth << endl;
							cout << "Fame: " << CFame << endl;
							cout << "To return type (1)" << endl;
							cin >> Continue;
							if (Continue == 1)
							{
							goto GodRealmMainMenu;
							Continue -= 1;
							}
							else
							{
								while (Continue != 1)
								{
									cout << "Please Enter a valid number" << endl;
									cin >> Continue;
								}
							}

							
						}
						

					}
				}
			
		}
		
		
		
	LifeHome:
			if(LifeHomeA == 0)
				{
					
					LifeHomeA += 1;
					cout << "You don't actually know where your home is but you follow your instincts and head the way you believe is your home" << endl;
					sleep(2);
					cout << "You approach a shiny marble house that is laced with violet blue bloches" << endl;
					sleep(2);
					cout << "The door is made of solid oak and is a adorned with gold leafing" << endl;
					sleep(2);
					cout << "The interior is as bright as the sun in the sky. You truly can feel your Holy power running through you" << endl;
					goto LifeHomeMenu;
				}
			else
				{
					cout << "You return to your pearlescent palace" << endl;
					goto LifeHomeMenu;
				}	
		
	DeathHome:
		if(DeathHomeA == 0)
		{
			DeathHomeA += 1;
			cout << "You don't actually know where your home is but you follow your instincts and head the way you believe is your home" << endl;
			sleep(2);
			cout << "You spot a dark granite structure that seems to hide itself within the fog of the clouds" << endl;
			sleep(2);
			cout << "The entrance way appears to be made of rotting wood with no visible door" << endl;
			sleep(2);
			cout << "The inside is poorly lit and smells of rot" << endl;
			sleep(2);
			cout << "Truly fitting for a God of Death" << endl;
			goto DeathHomeMenu;
		
		}
		else 
		{
			cout << "You have returned to you palace of Death" << endl;
			goto DeathHomeMenu;
		}
	FireHome:
		if(FireHomeA == 0)
		{
			FireHomeA += 1;
			cout << "You don't actually know where your home is but you follow your instincts and head the way you believe is your home" << endl;
			sleep(2);
			cout << "You see a glowing structure that resembles the light ejected by a hot emeber" << endl;
			sleep(2);
			cout << "The entrence is dawned by the eternal glow of fire and a grand door made of red hot steel" << endl;
			sleep(2);
			cout << "The interior is almost as grand as the outside, filled with glowing gold accessories" << endl;
			sleep(2);
			cout << "This will suit a God like you" << endl;
			goto FireHomeMenu;
		}
		else 
		{
			cout << "You have returned to your domain of fire" << endl;
			goto FireHomeMenu;
		}
		
	NatureHome:
		if(NatureHomeA == 0)
		{
			NatureHomeA += 1;
			cout << "You don't actually know where your home is but you follow your instincts and head the way you believe is your home" << endl;
			sleep(2);
			cout << "You are greeted by a happy white and brown spotted dog, he leads you to a grand oak " << endl;
			sleep(2);
			cout << "The grand tree appears to extend past the clouds and pierce the sky" << endl;
			sleep(2);
			cout << "The entrance is merley vines dangling infront of an opening of the tree" << endl;
			sleep(3);
			cout << "Within the tree, many animals from small insects to fierce lions coexist peacefully" << endl;
			goto NatureHomeMenu;
		}
		else 
		{
			cout << "You have returned to your tree of coexistence" << endl;
			goto NatureHomeMenu;
		}
	CalamityHome:
		if(CalamityHomeA == 0)
		{
			CalamityHomeA += 1;
			cout << "You don't actually know where your home is but you follow your instincts and head the way you believe is your home" << endl;
			sleep(2);
			cout << "You spot a fierce looking structure with sharp fine edges that gives off a very voracious feel" << endl;
			sleep(2);
			cout << "The gate seems to fall open as if it was expecting your arrival" << endl;
			sleep(2);
			cout << "The interior contians more weapons than anyone could imagine and all at your disposal" << endl;
			sleep(2);
			cout << "This will suit a god of calamity" << endl;
			goto CalamityHomeMenu;
		}
		else 
		{
			cout << "You have entered your estate of destruction" << endl;
			goto CalamityHomeMenu;
		}
	
	GodRealmCentre:
		sleep(2);
		if (GodRealmCentreA == 0)
		{
			cout << "You follow the large sign that reads 'God Realm Centre' which leads you into a hollow hall way" << endl;
			sleep(2);
			cout << "At the end of the hall way you see lush green rolling hills, calm deep blue ponds and a single apple tree" << endl;
			sleep(2);
			cout << "You see many other people roaming these fields" << endl;
			sleep(2);
			cout << "An old man who was lounging in the grass by the entrance calls out to you" << endl;
			sleep(2);
			cout << "You approach him" << endl;
			sleep(2);
			cout << "...." << endl;
			sleep(2);
			cout << "Old Man: You must be the new God everyone is talking about" << endl;
			GodRealmCentreA += 1;
			goto OldManGodRealm;
		}
		else 
		{
			cout << "You have returned to the God Realm Centre" << endl;
			goto GodRealmCentreMenu;
		}
	
	OldManGodRealm:
		if((OldManGodRealmB < 1) || (OldManGodRealmC < 1))
		{
			sleep(2);
			cout << "Choose Your Response" << endl;
			cout << "'Who are you and what are you doing here?'(1)" << endl;
			cout << "'What is this place?'(2)" << endl;
			cout << "Go back (3)" << endl;
			cin >> OldManGodRealmA;
			if (OldManGodRealmA == 1)
				{
					OldManGodRealmB += 1;
					sleep(1);
					cout << "Old Man: Whom and what I am does not matter..." << endl;
					sleep(1);
					cout << "Old Man: Be wary of whom you tell your true name to..." << endl;
					sleep(1);
					cout << "Old Man: Not everyone here is a god... some are angels who mean nothing but to guide lost souls..." << endl;
					sleep(1);
					cout << "Old Man: ...." << endl;
					sleep(2);
					cout << "Old Man: ...and...the others are demons" << endl;
					goto OldManGodRealm;
				}
				if (OldManGodRealmA == 2)
				{
					OldManGodRealmC += 1;
					cout << "Old Man: This is where us angels and non gods live..." << endl;
					sleep(2);
					cout << "Old Man: You see that apple tree over there... unlike you gods we need to eat the apples to survive" << endl;
					sleep(2);
					cout << "Old Man: ... we have several problems though... though they should be no concern to you..." << endl;
					goto OldManGodRealm;
				}
				if (OldManGodRealmA == 3)
				{
					goto GodRealmChoiceMenu;
				}
		}
		if((OldManGodRealmB >= 1) && (OldManGodRealmC >= 1))
			{
				sleep(1);
				cout << "Old Man: ...." << endl;
				sleep(1);
				cout << "It appears that the old man has passed out" << endl;
				sleep(2);
				goto GodRealmCentreMenu;
			}
	EarthRealmVortex:
		if(WeaponTrain == 0)
			{
				sleep(2);
				cout << "You go to approach the vortex" << endl;
				sleep(2);
				cout << "...." << endl;
				sleep(2);
				cout << "Random Hooded Stranger: HOOOOOLLLDDD OON THEERREE!!!!" << endl;
				sleep(2);
				cout << "...." << endl;
				sleep(2);
				cout << "Random Hooded Stranger: What are you DOING?!" << endl;
				sleep(2);
				cout << "...." << endl;
				sleep(2);
				cout << "Random Hooded Stranger: Oh don't give me that look. You were about to jump in the vortex, weren't you?" << endl;
				sleep(2);
				cout << "Random Hooded Stranger: Do you even know how to fight?" << endl;
				sleep(2);
				cout << "Random Hooded Stranger: ....Do you even have a weapon?" << endl;
				sleep(2);
				cout << "Random Hooded Stranger: Well your crazy go on jump in, im not gonna try to stop you" << endl;
				sleep(2);
				cout << "Random Hooded Stranger: Go on! what are you waiting for?" << endl;
				sleep(2);
				cout << "...." << endl;
				sleep(2);
				cout << "Random Hooded Stranger: OOH, so now you want my help, don't ya?" << endl;
				sleep(2);
				cout << "Random Hooded Stranger: Fine, I could use some practicve myself, here." << endl;
				InvetoryA += 1;
				InvetoryTrainerSword += 1;
				ArmoryMenu += 1;
				sleep(2);
				cout << "You have recieved a Basic Sharp Sword(+10 damage)" << endl;
				if(GodChoice == 1)
				{
					CurrentlyEquiped = 0 + 10; 
				}
				if(GodChoice == 2)
				{
					CurrentlyEquiped = 0 + 10;
				}
				if(GodChoice == 3)
				{
					CurrentlyEquiped = 5 + 10;
				}
				if(GodChoice == 4)
				{
					CurrentlyEquiped = 0 + 10;
				}
				if(GodChoice == 5)
				{
					CurrentlyEquiped = 10 + 10;
				}
				sleep(2);
				cout << "Random Hooded Stranger: Now give me all you got!" << endl;
				sleep(2);
				goto FightTraining;				
			}
		if(WeaponTrain == 1)
			{
				if(EarthRealmVortexA == 0)
				{
					sleep(2);
					cout << "You peer into the swirling vortex that seems to lead into infinity" << endl;
					sleep(2);
					cout << "There is a strange pull that makes you attracted to said vortex" << endl;
					sleep(2);
					cout << "Its almost as if you can hear whispers in the vortex" << endl;
					sleep(3);
					cout << "Would you like to go into the vortex?" << endl;
					cout << "Jump into the void (1)" << endl;
					cout << "Go back to the God Realm (2)" << endl;
					cin >> EnterVortex;
					if(EnterVortex == 1)
					{
						GodRealmMainMenuExplore += 1;
						goto EarthRealm;
					}
					if(EnterVortex == 2)
					{
						goto GodRealmChoiceMenu;
					}
					else 
					{
						cout << "Enter a valid input" << endl;
						goto EarthRealmVortex;
					}
					
				}
			}
		
	LifeHomeMenu:
		if(HouseHint == 0)
			{
				HouseHint += 1;
				cout << "Your house contains many wonders" << endl;
				sleep(2);
				cout << "You have what appears to be a book labeled 'History' and it appears that it will save important information during your travels" << endl;
				sleep(2);
				cout << "You can also store relics and items you have gathered else where" << endl;
				sleep(2);
				cout << "Also here you can rest a regain your strength as this is your domain" << endl;
				sleep(2);
				goto LifeHomeMenu;
			}
		if(HouseHint == 1)
			{
				cout << "Welcome to your humble abode" << endl;
				cout << "Open your History book (1)" << endl;
				cout << "View your items and relics (2)" << endl;
				cout << "Rest and regain your health (3)" << endl;
				cout << "Visit your armory (4)" << endl;
				cout << "View stats (5)" << endl;
				cout << "Return to God Realm (6)" << endl;
				cin >> LifeHouse;
				if (LifeHouse == 4)
					{
						goto ArmoryMain;
					}
				if (LifeHouse == 6)
					{
						goto GodRealmMainMenu;
					}
				if(LifeHouse == 1)
					{
						goto HistoryBook;
					}
				if(LifeHouse == 2)
					{
						goto Invetory;
					}
				if(LifeHouse == 3)
					{
						goto Rest;
					}
				if(LifeHouse == 5)
					{
						cout << "Stats" << endl;
						if (GodChoice == 1)
						{
						
							cout << "Kills: " << LKills << endl;
							cout << "Belief: " << LBelief << endl;
							cout << "Hate: " << LHate << endl;
							cout << "Health: " << LHealth << endl;
							cout << "Fame: " << LFame << endl;
							cout << "To return type (1)" << endl;
							cin >> Continue;
							if (Continue == 1)
							{
							goto LifeHomeMenu;
							Continue -= 1;
							}
							else
							{
								while (Continue != 1)
								{
									cout << "Please Enter a valid number" << endl;
									cin >> Continue;
								}
							}

						}
						if (GodChoice == 2)
						{
					
							cout << "Kills: " << FKills << endl;
							cout << "Belief: " << FBelief << endl;
							cout << "Hate: " << FHate << endl;
							cout << "Health: " << FHealth << endl;
							cout << "Fame: " << FFame << endl;
							cout << "To return type (1)" << endl;
							cin >> Continue;
							if (Continue == 1)
							{
							goto FireHomeMenu;
							Continue -= 1;
							}
							else
							{
								while (Continue != 1)
								{
									cout << "Please Enter a valid number" << endl;
									cin >> Continue;
								}
							}


						}
						if (GodChoice == 3)
						{
				
							cout << "Kills: " << NKills << endl;
							cout << "Belief: " << NBelief << endl;
							cout << "Hate: " << NHate << endl;
							cout << "Health: " << NHealth << endl;
							cout << "Fame: " << NFame << endl;
							cout << "To return type (1)" << endl;
							cin >> Continue;
							if (Continue == 1)
							{
							goto NatureHomeMenu;
							Continue -= 1;
							}
							else
							{
								while (Continue != 1)
								{
									cout << "Please Enter a valid number" << endl;
									cin >> Continue;
								}
							}


						}
						if (GodChoice == 4)
						{
					
							cout << "Kills: " << DKills << endl;
							cout << "Belief: " << DBelief << endl;
							cout << "Hate: " << DHate << endl;
							cout << "Health: " << DHealth << endl;
							cout << "Fame: " << DFame << endl;
							cout << "To return type (1)" << endl;
							cin >> Continue;
							if (Continue == 1)
							{
							goto DeathHomeMenu;
							Continue -= 1;
							}
							else
							{
								while (Continue != 1)
								{
									cout << "Please Enter a valid number" << endl;
									cin >> Continue;
								}
							}

						}
						if (GodChoice == 5)
						{
						
							cout << "Kills: " << CKills << endl;
							cout << "Belief: " << CBelief << endl;
							cout << "Hate: " << CHate << endl;
							cout << "Health: " << CHealth << endl;
							cout << "Fame: " << CFame << endl;
							cout << "To return type (1)" << endl;
							cin >> Continue;
							if (Continue == 1)
							{
							goto CalamityHomeMenu;
							Continue -= 1;
							}
							else
							{
								while (Continue != 1)
								{
									cout << "Please Enter a valid number" << endl;
									cin >> Continue;
								}
							}

							
						}

					}
					else 
					{
						cout << "Enter a valid input" << endl;
						sleep(1);
						goto LifeHomeMenu;
						
					}
			}	
	NatureHomeMenu:
		if(HouseHint == 0)
			{
				HouseHint += 1;
				cout << "Your house contains many wonders" << endl;
				sleep(2);
				cout << "You have what appears to be a book labeled 'History' and it appears that it will save important informacion during your travels" << endl;
				sleep(2);
				cout << "You can also store relics and items you have gathered else where" << endl;
				sleep(2);
				cout << "Also here you can rest a regain your strength as this is your domain" << endl;
				sleep(2);
				goto NatureHomeMenu;
			}
		if(HouseHint == 1)
			{
				cout << "Welcome to your humble abode" << endl;
				cout << "Open your History book (1)" << endl;
				cout << "View your items and relics (2)" << endl;
				cout << "Rest and regain your health (3)" << endl;
				cout << "Visit your armory (4)" << endl;
				cout << "View stats (5)" << endl;
				cout << "Return to God Realm (6)" << endl;
				cin >> NatureHouse;
				if(NatureHouse == 4)
					{
						goto ArmoryMain;
					}
				if(NatureHouse == 6)
					{
						goto GodRealmMainMenu;
					}
				if(NatureHouse == 1)
					{
						goto HistoryBook;
					}
				if(NatureHouse == 2)
					{
						goto Invetory;
					}
				if(NatureHouse == 3)
					{
						goto Rest;
					}
				if(NatureHouse == 5)
					{
						cout << "Stats" << endl;
							if (GodChoice == 1)
							{
								
								cout << "Kills: " << LKills << endl;
								cout << "Belief: " << LBelief << endl;
								cout << "Hate: " << LHate << endl;
								cout << "Health: " << LHealth << endl;
								cout << "Fame: " << LFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto LifeHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

							}
							if (GodChoice == 2)
							{
								
								cout << "Kills: " << FKills << endl;
								cout << "Belief: " << FBelief << endl;
								cout << "Hate: " << FHate << endl;
								cout << "Health: " << FHealth << endl;
								cout << "Fame: " << FFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto FireHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}


							}
							if (GodChoice == 3)
							{
								cout << "Kills: " << NKills << endl;
								cout << "Belief: " << NBelief << endl;
								cout << "Hate: " << NHate << endl;
								cout << "Health: " << NHealth << endl;
								cout << "Fame: " << NFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto NatureHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}


							}
							if (GodChoice == 4)
							{
						
								cout << "Kills: " << DKills << endl;
								cout << "Belief: " << DBelief << endl;
								cout << "Hate: " << DHate << endl;
								cout << "Health: " << DHealth << endl;
								cout << "Fame: " << DFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto DeathHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

							}
							if (GodChoice == 5)
							{
							
								cout << "Kills: " << CKills << endl;
								cout << "Belief: " << CBelief << endl;
								cout << "Hate: " << CHate << endl;
								cout << "Health: " << CHealth << endl;
								cout << "Fame: " << CFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto CalamityHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

								
							}

						}
					else 
					{
						cout << "Enter a valid input" << endl;
						sleep(1);
						goto NatureHomeMenu;
						
					}
			}	
	FireHomeMenu:
		if(HouseHint == 0)
			{
				HouseHint += 1;
				cout << "Your house contains many wonders" << endl;
				sleep(2);
				cout << "You have what appears to be a book labeled 'History' and it appears that it will save important informacion during your travels" << endl;
				sleep(2);
				cout << "You can also store relics and items you have gathered else where" << endl;
				sleep(2);
				cout << "Also here you can rest a regain your strength as this is your domain" << endl;
				sleep(2);
				goto FireHomeMenu;
			}
		if(HouseHint == 1)
			{
				cout << "Welcome to your humble abode" << endl;
				cout << "Open your History book (1)" << endl;
				cout << "View your items and relics (2)" << endl;
				cout << "Rest and regain your health (3)" << endl;
				cout << "Visit your armory (4)" << endl; 
				cout << "View stats (5)" << endl;
				cout << "Return to God Realm (6)" << endl;
				cin >> FireHouse;
				if(FireHouse == 4)
					{
						goto ArmoryMain;
					}
				if(FireHouse == 6)
					{
						goto GodRealmMainMenu;
					}
				if(FireHouse == 1)
					{
						goto HistoryBook;
					}
				if(FireHouse == 2)
					{
						goto Invetory;
					}
				if(FireHouse == 3)
					{
						goto Rest;
					}
				if(FireHouse == 5)
					{
						cout << "Stats" << endl;
							if (GodChoice == 1)
							{
							
								cout << "Kills: " << LKills << endl;
								cout << "Belief: " << LBelief << endl;
								cout << "Hate: " << LHate << endl;
								cout << "Health: " << LHealth << endl;
								cout << "Fame: " << LFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto LifeHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

							}
							if (GodChoice == 2)
							{
						
								cout << "Kills: " << FKills << endl;
								cout << "Belief: " << FBelief << endl;
								cout << "Hate: " << FHate << endl;
								cout << "Health: " << FHealth << endl;
								cout << "Fame: " << FFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto FireHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}


							}
							if (GodChoice == 3)
							{
				
								cout << "Kills: " << NKills << endl;
								cout << "Belief: " << NBelief << endl;
								cout << "Hate: " << NHate << endl;
								cout << "Health: " << NHealth << endl;
								cout << "Fame: " << NFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto NatureHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}


							}
							if (GodChoice == 4)
							{
								
								cout << "Kills: " << DKills << endl;
								cout << "Belief: " << DBelief << endl;
								cout << "Hate: " << DHate << endl;
								cout << "Health: " << DHealth << endl;
								cout << "Fame: " << DFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto DeathHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

							}
							if (GodChoice == 5)
							{
							
								cout << "Kills: " << CKills << endl;
								cout << "Belief: " << CBelief << endl;
								cout << "Hate: " << CHate << endl;
								cout << "Health: " << CHealth << endl;
								cout << "Fame: " << CFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto CalamityHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

								
							}

						}					
					else 
					{
						cout << "Enter a valid input" << endl;
						sleep(1);
						goto FireHomeMenu;
						
					}
			}	
	DeathHomeMenu:
		if(HouseHint == 0)
			{
				HouseHint += 1;
				cout << "Your house contains many wonders" << endl;
				sleep(2);
				cout << "You have what appears to be a book labeled 'History' and it appears that it will save important informacion during your travels" << endl;
				sleep(2);
				cout << "You can also store relics and items you have gathered else where" << endl;
				sleep(2);
				cout << "Also here you can rest a regain your strength as this is your domain" << endl;
				sleep(2);
				goto DeathHomeMenu;
			}
		if(HouseHint == 1)
			{
				cout << "Welcome to your humble abode" << endl;
				cout << "Open your History book (1)" << endl;
				cout << "View your items and relics (2)" << endl;
				cout << "Rest and regain your health (3)" << endl;
				cout << "Visit your armory (4)" << endl;
				cout << "View stats (5)" << endl;
				cout << "Return to God Realm (6)" << endl;
				cin >> DeathHouse;
				if(DeathHouse == 4)
					{
						goto ArmoryMain;
					}
				if(DeathHouse == 6)
					{
						goto GodRealmMainMenu;
					}
				if(DeathHouse == 1)
					{
						goto HistoryBook;
					}
				if(DeathHouse == 2)
					{
						goto Invetory;
					}
				if(DeathHouse == 3)
					{
						goto Rest;
					}
				if(DeathHouse == 5)
					{
						cout << "Stats" << endl;
							if (GodChoice == 1)
							{
							
								cout << "Kills: " << LKills << endl;
								cout << "Belief: " << LBelief << endl;
								cout << "Hate: " << LHate << endl;
								cout << "Health: " << LHealth << endl;
								cout << "Fame: " << LFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto LifeHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

							}
							if (GodChoice == 2)
							{
						
								cout << "Kills: " << FKills << endl;
								cout << "Belief: " << FBelief << endl;
								cout << "Hate: " << FHate << endl;
								cout << "Health: " << FHealth << endl;
								cout << "Fame: " << FFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto FireHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}


							}
							if (GodChoice == 3)
							{
				
								cout << "Kills: " << NKills << endl;
								cout << "Belief: " << NBelief << endl;
								cout << "Hate: " << NHate << endl;
								cout << "Health: " << NHealth << endl;
								cout << "Fame: " << NFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto NatureHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}


							}
							if (GodChoice == 4)
							{
								
								cout << "Kills: " << DKills << endl;
								cout << "Belief: " << DBelief << endl;
								cout << "Hate: " << DHate << endl;
								cout << "Health: " << DHealth << endl;
								cout << "Fame: " << DFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto DeathHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

							}
							if (GodChoice == 5)
							{
								
								cout << "Kills: " << CKills << endl;
								cout << "Belief: " << CBelief << endl;
								cout << "Hate: " << CHate << endl;
								cout << "Health: " << CHealth << endl;
								cout << "Fame: " << CFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto CalamityHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

								
							}

						}
					else 
					{
						cout << "Enter a valid input" << endl;
						sleep(1);
						goto DeathHomeMenu;
						
					}
			}	
	CalamityHomeMenu:
		if(HouseHint == 0)
			{
				HouseHint += 1;
				cout << "Your house contains many wonders" << endl;
				sleep(2);
				cout << "You have what appears to be a book labeled 'History' and it appears that it will save important information during your travels" << endl;
				sleep(2);
				cout << "You can also store relics and items you have gathered else where" << endl;
				sleep(2);
				cout << "Also here you can rest a regain your strength as this is your domain" << endl;
				sleep(2);
				goto CalamityHomeMenu;
			}
		if(HouseHint == 1)
			{
				cout << "Welcome to your humble abode" << endl;
				cout << "Open your History book (1)" << endl;
				cout << "View your items and relics (2)" << endl;
				cout << "Rest and regain your health (3)" << endl;
				cout << "Visit your armory (4)" << endl;
				cout << "View stats (5)" << endl;
				cout << "Return to God Realm (6)" << endl;
				cin >> CalamityHouse;
				if(CalamityHouse == 4)
					{
						goto ArmoryMain;
					}
				if(CalamityHouse == 6)
					{
						goto GodRealmMainMenu;
					}
				if(CalamityHouse == 1)
					{
						goto HistoryBook;
					}
				if(CalamityHouse == 2)
					{
						goto Invetory;
					}
				if(CalamityHouse == 3)
					{
						goto Rest;
					}
				if(CalamityHouse == 5)
					{
						cout << "Stats" << endl;
							if (GodChoice == 1)
							{
								
								cout << "Kills: " << LKills << endl;
								cout << "Belief: " << LBelief << endl;
								cout << "Hate: " << LHate << endl;
								cout << "Health: " << LHealth << endl;
								cout << "Fame: " << LFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto LifeHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

							}
							if (GodChoice == 2)
							{

								cout << "Kills: " << FKills << endl;
								cout << "Belief: " << FBelief << endl;
								cout << "Hate: " << FHate << endl;
								cout << "Health: " << FHealth << endl;
								cout << "Fame: " << FFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto FireHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}


							}
							if (GodChoice == 3)
							{
						
								cout << "Kills: " << NKills << endl;
								cout << "Belief: " << NBelief << endl;
								cout << "Hate: " << NHate << endl;
								cout << "Health: " << NHealth << endl;
								cout << "Fame: " << NFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto NatureHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}


							}
							if (GodChoice == 4)
							{
								cout << "Kills: " << DKills << endl;
								cout << "Belief: " << DBelief << endl;
								cout << "Hate: " << DHate << endl;
								cout << "Health: " << DHealth << endl;
								cout << "Fame: " << DFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto DeathHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

							}
							if (GodChoice == 5)
							{
							
								cout << "Kills: " << CKills << endl;
								cout << "Belief: " << CBelief << endl;
								cout << "Hate: " << CHate << endl;
								cout << "Health: " << CHealth << endl;
								cout << "Fame: " << CFame << endl;
								cout << "To return type (1)" << endl;
								cin >> Continue;
								if (Continue == 1)
								{
								goto CalamityHomeMenu;
								Continue -= 1;
								}
								else
								{
									while (Continue != 1)
									{
										cout << "Please Enter a valid number" << endl;
										cin >> Continue;
									}
								}

								
							}

						}					
					else 
					{
						cout << "Enter a valid input" << endl;
						sleep(1);
						goto CalamityHomeMenu;
						
					}
			}	
	GodRealmCentreMenu:
		cout << "Welcome to the Centre of the God Realm" << endl;
		cout << "Go to the apple tree (1)" << endl;
		cout << "Search around the hills for someone to talk to (2)" << endl;
		cout << "Check on the old man (3)" << endl;
		cout << "Search the golden chest by the entrance (4)" << endl;
		cout << "Go back (5)" << endl;
		cout << "View stats (6)" << endl;
		cin >> GodRealmCentreMenuNav;
		if (GodRealmCentreMenuNav == 1)
			{
				goto AppleTree;
			}
		if (GodRealmCentreMenuNav == 2)
			{
				goto GodRealmCentrePlain;
			}
		if (GodRealmCentreMenuNav == 3)
			{
				goto OldManGodRealm;
			}
		if (GodRealmCentreMenuNav == 4)
			{
				goto GodRealmCentreChest;
			}
		if (GodRealmCentreMenuNav == 5)
			{
				goto GodRealmMainMenu;
			}
		if (GodRealmCentreMenuNav == 6)
			{
				cout << "Stats" << endl;
					if (GodChoice == 1)
					{
						
						cout << "Kills: " << LKills << endl;
						cout << "Belief: " << LBelief << endl;
						cout << "Hate: " << LHate << endl;
						cout << "Health: " << LHealth << endl;
						cout << "Fame: " << LFame << endl;
						cout << "To return type (1)" << endl;
						cin >> Continue;
						if (Continue == 1)
						{
						goto GodRealmCentreMenu;
						Continue -= 1;
						}
						else
						{
							while (Continue != 1)
							{
								cout << "Please Enter a valid number" << endl;
								cin >> Continue;
							}
						}

					}
					if (GodChoice == 2)
					{

						cout << "Kills: " << FKills << endl;
						cout << "Belief: " << FBelief << endl;
						cout << "Hate: " << FHate << endl;
						cout << "Health: " << FHealth << endl;
						cout << "Fame: " << FFame << endl;
						cout << "To return type (1)" << endl;
						cin >> Continue;
						if (Continue == 1)
						{
						goto GodRealmCentreMenu;
						Continue -= 1;
						}
						else
						{
							while (Continue != 1)
							{
								cout << "Please Enter a valid number" << endl;
								cin >> Continue;
							}
						}


					}
					if (GodChoice == 3)
					{
				
						cout << "Kills: " << NKills << endl;
						cout << "Belief: " << NBelief << endl;
						cout << "Hate: " << NHate << endl;
						cout << "Health: " << NHealth << endl;
						cout << "Fame: " << NFame << endl;
						cout << "To return type (1)" << endl;
						cin >> Continue;
						if (Continue == 1)
						{
						goto GodRealmCentreMenu;
						Continue -= 1;
						}
						else
						{
							while (Continue != 1)
							{
								cout << "Please Enter a valid number" << endl;
								cin >> Continue;
							}
						}


					}
					if (GodChoice == 4)
					{
						cout << "Kills: " << DKills << endl;
						cout << "Belief: " << DBelief << endl;
						cout << "Hate: " << DHate << endl;
						cout << "Health: " << DHealth << endl;
						cout << "Fame: " << DFame << endl;
						cout << "To return type (1)" << endl;
						cin >> Continue;
						if (Continue == 1)
						{
						goto GodRealmCentreMenu;
						Continue -= 1;
						}
						else
						{
							while (Continue != 1)
							{
								cout << "Please Enter a valid number" << endl;
								cin >> Continue;
							}
						}

					}
					if (GodChoice == 5)
					{
					
						cout << "Kills: " << CKills << endl;
						cout << "Belief: " << CBelief << endl;
						cout << "Hate: " << CHate << endl;
						cout << "Health: " << CHealth << endl;
						cout << "Fame: " << CFame << endl;
						cout << "To return type (1)" << endl;
						cin >> Continue;
						if (Continue == 1)
						{
						goto GodRealmCentreMenu;
						Continue -= 1;
						}
						else
						{
							while (Continue != 1)
							{
								cout << "Please Enter a valid number" << endl;
								cin >> Continue;
							}
						}

						
					}
			}
	EarthRealm:
		if (EarthRealmA == 0)
		{
			EarthRealmA += 1;
			cout << "VVVVVVvvvvSHHHhhhhHHhhhhhHHHHHHHHhhhhhHHHHH" << endl;
			sleep(2);
			cout << "As you dive in you hear a loud swishing noise as if you were being sucked under water at unimaginable rate" << endl;
			sleep(2);
			cout << "Time begins to feel as if it is slowing" << endl;
			sleep(1);
			cout << "You can hear the flutter of wind" << endl;
			sleep(1);
			cout << "As you emerge from clouds you can see the violet and blue hugh from the ocean, the expansive green plains of Earth and the tall structures of mankind" << endl;
			sleep(1);
			cout << "You can smell the salt water in the air as you plummet towards the Earth" << endl;
			goto EarthRealm;
		}
		if (EarthRealmA == 1)
		{
			cout << "Welcome to the Earth Realm " << Player << endl;
			goto EarthRealmMenu;
		}
	EarthRealmMenu:
		
			if(EarthRand == 1)
			{
				if(EarthOcean == 0)
					{
						EarthOcean += 1;
						cout << "You see the deep blue of the ocean below " << endl;
						sleep(3);
						cout << "Slowly you approach the rolling waves below" << endl;
						sleep(3);
						cout << "*Splash*" << endl;
						sleep(2);
						goto EarthOceanMain;
					}
				if(EarthOcean == 1)
					{
						cout << "You fall back through the vortex" << endl;
						sleep(3);
						cout << "*Splash*" << endl;
						sleep(2);
						goto EarthOceanMain;
					}
			}
			if(EarthRand == 2)
			{
				if(EarthCountry == 0)
					{
						EarthCountry += 1;
						cout << "You see the rolling green plains below you" << endl;
						sleep(3);
						cout << "The grounds are spotted with farms and fields of crops" << endl;
						sleep(3);
						cout << "*Thump*" << endl;
						sleep(2);
						goto EarthCountryMain;
					}
				if(EarthCountry == 1)
					{
						cout << "You see the familiar sight of rolling green plains and small farms below" << endl;
						sleep(3);
						cout << "*Thump*" << endl;
						sleep(2);
						goto EarthCountryMain;
					}
			}
			if(EarthRand == 3)
			{
				if(EarthCity == 0)
					{
						EarthCity += 1;
						cout << "You see the grand structure of man creations" << endl;
						sleep(3);
						cout << "The isolated group of grey buildings is surrounded by the green of the earth" << endl;
						sleep(3);
						cout << "*Thump*" << endl;
						goto EarthCityMain;
					}
				if(EarthCity == 1)
					{
						cout << "You see the familiar isloated grey structures" << endl;
						sleep(3);
						cout << "*Thump*" << endl;
						sleep(2);
						goto EarthCityMain;
					}
			}
			if(EarthRand == 0)
			{
				if(EarthDesert == 0)
					{
						cout << "You see the convergence of the flat yellow sand and the clear blue ocean near by" << endl;
						sleep(3);
						cout << "The sand below seems to be desolate of most life" << endl;
						sleep(3);
						cout << "*Thump*" << endl;
						sleep(3);
						goto EarthDesertMain;
					}
				if(EarthDesert == 1) 
					{
						cout << "The familiar yellow sand greets you as you return" << endl;
						sleep(3);
						cout << "*Thump*" << endl;
						sleep(3);
						goto EarthDesertMain;
					}
			}
		
	HistoryBook:
		cout << "Your collected notes and history" << endl;
		if (HistoryBookA == 0)
			{
				cout << "You have no recorded history yet" << endl;
				sleep(1);
				if(GodChoice == 1)
				{
					goto LifeHomeMenu;
				}
				if(GodChoice == 2)
				{
					goto FireHomeMenu;
				}
				if(GodChoice == 3)
				{
					goto NatureHomeMenu;
				}
				if(GodChoice == 4)
				{
					goto DeathHomeMenu;
				}
				if(GodChoice == 5)
				{
					goto CalamityHomeMenu;
				}
			}
		
	Invetory:
		cout << "Your collected items and relics" << endl;
		cout << "Go back (1)" << endl;
		if (InvetoryA == 0)
			{
				cout << "You have nothing in your invetory" << endl;
				sleep(1);
				if(GodChoice == 1)
				{
					goto LifeHomeMenu;
				}
				if(GodChoice == 2)
				{
					goto FireHomeMenu;
				}
				if(GodChoice == 3)
				{
					goto NatureHomeMenu;
				}
				if(GodChoice == 4)
				{
					goto DeathHomeMenu;
				}
				if(GodChoice == 5)
				{
					goto CalamityHomeMenu;
				}
			if (InvetoryTrainerSword == 1)
				{
					InvetoryA += 1;
					cout << "A basic sword recieved by that sketchy guy by the vortex" << endl;
				}
			if (GoldGodDagger == 1)
				{
					InvetoryA += 1;
					cout << "A beautiful dagger only fit to be carried by a god" << endl;
				}
			
			cin >> InvetoryGoback;
				if (InvetoryGoback == 1) 
					{
						{
						  if(GodChoice == 1)
						{
							goto LifeHomeMenu;
						}
						if(GodChoice == 2)
						{
							goto FireHomeMenu;
						}
						if(GodChoice == 3)
						{
							goto NatureHomeMenu;
						}
						if(GodChoice == 4)
						{
							goto DeathHomeMenu;
						}
						if(GodChoice == 5)
						{
							goto CalamityHomeMenu;
						}

						}	
					}
					else 
						{
							
							while (InvetoryGoback != 1)
								{
									cout << "Enter a valid number" << endl;
									cin >> InvetoryGoback;
									if (InvetoryGoback == 1) 
									{
										{
										  if(GodChoice == 1)
										{
											goto LifeHomeMenu;
										}
										if(GodChoice == 2)
										{
											goto FireHomeMenu;
										}
										if(GodChoice == 3)
										{
											goto NatureHomeMenu;
										}
										if(GodChoice == 4)
										{
											goto DeathHomeMenu;
										}
										if(GodChoice == 5)
										{
											goto CalamityHomeMenu;
										}

										}	
									}

								}
						}
			}
	Rest:
		if (RestReady == 1)
			{
				
				if(GodChoice == 1)
				{
					if (LHealth == 50)
					{
						cout << "You have no need to rest" << endl;
						goto LifeHomeMenu;
					}
					if (LHealth != 50)
						{
							LHealth += 20;
							if (LHealth > 50)
								{
									LHealth = 50;
								}
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							goto LifeHomeMenu;
						}
				
				}
				if(GodChoice == 2)
				{
					if (FHealth == 100)
						{
							cout << "You have no need to rest" << endl;
							goto FireHomeMenu;
						}
					if (FHealth != 100)
						{
							FHealth += 20;
							if (FHealth > 100)
								{
									FHealth = 100;
								}
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							goto FireHomeMenu;
						}
				}
				if(GodChoice == 3)
				{
					if (NHealth == 80)
						{
							cout << "You have no need to rest" << endl;
						}
					if (NHealth != 80)
						{
							NHealth += 20;
							if (NHealth > 80)
								{
									NHealth = 80;
								}
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							goto NatureHomeMenu;
						}
				}
				if(GodChoice == 4)
				{
					if (DHealth == 90)
						{
							cout << "You have no need to rest" << endl;
						}
					if (DHealth != 90)
						{
							DHealth += 20;
							if (DHealth > 90)
								{
									DHealth = 90;
								}
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							goto DeathHomeMenu;
						}
				}
				if(GodChoice == 5)
				{
					if (CHealth == 120)
						{
							cout << "You have no need to rest" << endl;
						}
					if (CHealth != 120)
						{
							CHealth += 20;
							if (CHealth > 120)
								{
									CHealth = 120;
								}
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							sleep(2);
							cout << "..." << endl;
							goto CalamityHomeMenu;	
						}
				}

			}
	GodRealmCentrePlain:
		if(GodRealmMainMenuExplore == 0)
			{
				sleep(2);
				cout << "The plains seemed to be the home for many of these non god entities" << endl;
				sleep(2);
				cout << "No one seems to be interested in anything" << endl;
				goto GodRealmCentrePlainMenu;
				
			}
	AppleTree:
		if(AppleTreeVisit == 0)
			{
				AppleTreeVisit += 1;
				sleep(2);
				cout << "It appears to be a normal apple tree" << endl;
				sleep(2);
				cout << "There are a few people near by but no one looks of intrest" << endl;
				sleep(2);
				goto AppleTreeMenu;
			}
		if(AppleTreeVisit == 1 && GodRealmMainMenuExplore == 0)
			{
				sleep(2);
				cout << "The tree seems to be there as usual" << endl;
				sleep(2);
				cout << "The people seem to be as relaxed as normal" << endl;
				sleep(2);
				goto AppleTreeMenu;
			}
	GodRealmCentreChest:
		if(GodRealmCentreChestE == 0)
		{
			GodRealmCentreChestE += 1;
			sleep(2);
			cout << "You fling open the golden box" << endl;
			sleep(3);
			cout << "There appears to be a dagger in here" << endl;
			sleep(2);
			cout << "You have aquired a Gold Godly Dagger (+20 attack)" << endl;
			sleep(2);
			cout << "You can equip it at your home" << endl;
			GoldGodDagger += 1;
			ArmoryMenu += 1;
			sleep(2);
			goto GodRealmCentreMenu;
			
		}
	FightTraining:
		WeaponTrain += 1;
		cout << "You Assume your fighting stance" << endl;
		sleep(2);
		cout << "During a battle, make sure you monitor your health" << endl;
		sleep(2);
		cout << "Also you will be able to see status" << endl;
		sleep(2);
		cout << "As you may know different gods have different skills, make sure you are aware of this in battle" << endl;
		sleep(3);
		cout << "Random Hooded Stranger: You know I won't being going lightly on you" << endl;
		sleep(3);
		cout << "Because the Random Hooded Stranger approached you he gets the first strike" << endl;
		sleep(2); 
		cout << "Currently you only know basic defensive moves but that will change as you progress" << endl;
		sleep(2);
		cout << "A simple parry is the safest way to stop an attack although you lose the chance to daze or hurt your opponent" << endl;
		sleep(2);
		cout << "A dodge is a good move to avoid being damaged and creating a chance to Daze to your enemy" << endl;
		sleep(2);
		cout << "A counter has a chance of dealing damage to an opponent but also has a chance of you recieveing the full blow from your an opponent" << endl;
		sleep(2);
		cout << "A Block is a good way of asborbing an attack with a chance of dazing your enemy" << endl;
		sleep(2);
		cout << "Remember a good defense is the key to winning any battle" << endl;
		sleep(3);
		goto FightTrainingDefense;
	FightTrainingDefense:
		cout << "Defense Manuever" << endl;
		cout << "Simple parry (1)" << endl;
		cout << "Dodge (2)" << endl;
		cout << "Counter (3)" << endl;
		cout << "Block (4)" << endl;
		cin >> DefenseChoice;
		if (DefenseChoice == 1)
			{
			
				
				if(GodChoice == 1)
					{
						if(LParry >= WeaponTrainerAttack)
						{
							sleep(2);
							cout << "*CRACK*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Huh you're not as bad as I thought" << endl;
							sleep(2);
							cout << "You have " << LHealth << " remaining" << endl;
							sleep(2);
							goto FightTrainingAttack;
						}
						if(LParry < WeaponTrainerAttack)
							{
								cout << "*Slash*" << endl;
								cout << "Random Hooded Stranger: You're not ready for this" << endl;
								goto GodRealmMainMenu;
							}
					}
				if(GodChoice == 2)
					{
						if(FParry >= WeaponTrainerAttack)
						{
							sleep(2);
							cout << "*CRACK*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Huh you're not as bad as I thought" << endl;
							sleep(2);
							cout << "You have " << FHealth << " remaining" << endl;
							goto FightTrainingAttack;
						}
						if(FParry < WeaponTrainerAttack)
							{
								cout << "*Slash*" << endl;
								cout << "Random Hooded Stranger: You're not ready for this" << endl;
								goto GodRealmMainMenu;
							}
					}
				if(GodChoice == 3)
					{
						if(NParry >= WeaponTrainerAttack)
						{
							sleep(2);
							cout << "*CRACK*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Huh you're not as bad as I thought" << endl;
							sleep(2);
							cout << "You have " << NHealth << " remaining" << endl;
							goto FightTrainingAttack;
						}
						if(NParry < WeaponTrainerAttack)
							{
								cout << "*Slash*" << endl;
								cout << "Random Hooded Stranger: You're not ready for this" << endl;
								goto GodRealmMainMenu;
							}
					}
				if(GodChoice == 4)
					{
						if(DParry >= WeaponTrainerAttack)
						{
							sleep(2);
							cout << "*CRACK*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Huh you're not as bad as I thought" << endl;
							sleep(2);
							cout << "You have " << DHealth << " remaining" << endl;
							goto FightTrainingAttack;
						}
						if(DParry < WeaponTrainerAttack)
							{
								cout << "*Slash*" << endl;
								cout << "Random Hooded Stranger: You're not ready for this" << endl;
								goto GodRealmMainMenu;
							}
					}
				if(GodChoice == 5)
					{
						if(CParry >= WeaponTrainerAttack)
						{
							sleep(2);
							cout << "*CRACK*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Huh you're not as bad as I thought" << endl;
							sleep(2);
							cout << "You have " << CHealth << " remaining" << endl;
							goto FightTrainingAttack;
						}
						if(CParry < WeaponTrainerAttack)
							{
								cout << "*Slash*" << endl;
								cout << "Random Hooded Stranger: You're not ready for this" << endl;
								goto GodRealmMainMenu;
							}
					}
			}
		if (DefenseChoice == 2)
			{
				LifeDodgeAttack = rand() % 8;
				FireDodgeAttack = rand() % 10;
				NatureDodgeAttack = rand() % 12;
				DeathDodgeAttack = rand() % 10;
				CalamityDodgeAttack = rand() % 14;
				if(GodChoice == 1)
				{
					if(LifeDodgeAttack != 20)
						{	
							sleep(2);
							cout << "*Woosh*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Hmm so you're fast huh" << endl;
							sleep(2);
							cout << "You have " << LHealth << " remaining" << endl;
							sleep(2);
							if (LifeDodgeAttack == 0)
							{
								WeaponTrainerDazed = true;
							}
							else
							{
								WeaponTrainerDazed = false;
							}
							goto FightTrainingAttack;
							
						}
					if(LifeDodgeAttack == 20)
						{
							sleep(2);
							cout << "*Crack*" << endl;
							sleep(2);
							cout << "You're not to fast on you're feet, luckily I went easy on you" << endl;
							sleep(2);
							cout << "You have " << LHealth << " remaining" << endl;
							sleep(2);
							goto FightTrainingAttack;
							
						}
				}
				if(GodChoice == 2)
				{
					if(FireDodgeAttack != 20)
						{	
							sleep(2);
							cout << "*Woosh*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Hmm so you're fast huh" << endl;
							sleep(2);
							cout << "You have " << FHealth << " remaining" << endl;
							sleep(2);
							if (FireDodgeAttack == 0)
							{
								WeaponTrainerDazed = true;
							}
							else
							{
								WeaponTrainerDazed = false;
							}
							goto FightTrainingAttack;
						}
					if(FireDodgeAttack == 20)
						{
							sleep(2);
							cout << "*Crack*" << endl;
							sleep(2);
							cout << "You're not to fast on your feet, luckily I went easy on you" << endl;
							sleep(2);
							cout << "You have " << FHealth << " remaining" << endl;
							sleep(2);
							goto FightTrainingAttack;
							
						}
				}
				if(GodChoice == 3)
				{
					if(NatureDodgeAttack != 20)
						{	
							sleep(2);
							cout << "*Woosh*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Hmm so you're fast huh" << endl;
							sleep(2);
							cout << "You have " << NHealth << " remaining" << endl;
							sleep(2);
							if (NatureDodgeAttack == 0)
							{
								WeaponTrainerDazed = true;
							}
							else
							{
								WeaponTrainerDazed = false;
							}
							goto FightTrainingAttack;
						}
					if(NatureDodgeAttack == 20)
						{
							sleep(2);
							cout << "*Crack*" << endl;
							sleep(2);
							cout << "Your not to fast on your feet, luckily I went easy on you" << endl;
							sleep(2);
							cout << "You have " << NHealth << " remaining" << endl;
							sleep(2);
							goto FightTrainingAttack;
							
						}
				}
				if(GodChoice == 4)
				{
					if(DeathDodgeAttack != 20)
						{	
							sleep(2);
							cout << "*Woosh*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Hmm so your fast huh" << endl;
							sleep(2);
							cout << "You have " << DHealth << " remaining" << endl;
							sleep(2);
							goto FightTrainingAttack;
							if (DeathDodgeAttack == 0)
							{
								WeaponTrainerDazed = true;
							}
							else
							{
								WeaponTrainerDazed = false;
							}
							goto FightTrainingAttack;
						}
					if(DeathDodgeAttack == 20)
						{
							sleep(2);
							cout << "*Crack*" << endl;
							sleep(2);
							cout << "Your not to fast on your feet, luckily I went easy on you" << endl;
							sleep(2);
							cout << "You have " << DHealth << " remaining" << endl;
							sleep(2);
							goto FightTrainingAttack;
							
						}
				}
				if(GodChoice == 5)
				{
					if(CalamityDodgeAttack != 20)
						{	
							sleep(2);
							cout << "*Woosh*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Hmm so your fast huh" << endl;
							sleep(2);
							cout << "You have " << CHealth << " remaining" << endl;
							sleep(2);
							goto FightTrainingAttack;
							if (CalamityDodgeAttack == 0)
							{
								WeaponTrainerDazed = true;
							}
							else
							{
								WeaponTrainerDazed = false;
							}
							goto FightTrainingAttack;
						}
					if(CalamityDodgeAttack == 20)
						{
							sleep(2);
							cout << "*Crack*" << endl;
							sleep(2);
							cout << "Your not to fast on your feet, luckily I went easy on you" << endl;
							sleep(2);
							cout << "You have " << CHealth << " remaining" << endl;
							sleep(2);
							goto FightTrainingAttack;
							
						}
				}
			
			}
		if(DefenseChoice == 3)
			{
				LifeCounterAttack = rand() % 5;
				NatureCounterAttack = rand() % 3;
				FireCounterAttack = rand() % 4;
				DeathCounterAttack = rand() % 4;
				CalamityCounterAttack = rand() % 3;

				if(GodChoice == 1)
					{
						if(LifeCounterAttack == 6)
						{
							sleep(2);
							cout << "*SLASH*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: ACK! ok ok you got me" << endl;
							sleep(2);
							cout << "The Random Hooded Stranger has taken 20 damage!" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well I guess I was wrong about you, good luck on your travels!" << endl;
							WeaponTrainerHealth -= 20;
							
						}
					}
				if(GodChoice == 2)
					{
						if(NatureCounterAttack == 6)
						{
							
							sleep(2);
							cout << "*SLASH*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: ACK! ok ok you got me" << endl;
							sleep(2);
							cout << "The Random Hooded Stranger has taken 20 damage!" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well I guess I was wrong about you, good luck on your travels!" << endl;
							WeaponTrainerHealth -= 20;

						}
						
					}
				if(GodChoice == 3)
					{
						if(FireCounterAttack == 6)
						{
							
							sleep(2);
							cout << "*SLASH*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: ACK! ok ok you got me" << endl;
							sleep(2);
							cout << "The Random Hooded Stranger has taken 20 damage!" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well I guess I was wrong about you, good luck on your travels!" << endl;
							WeaponTrainerHealth -= 20;

						}
					}
				if(GodChoice == 4)
					{
						if(DeathCounterAttack == 6)
						{
							
							sleep(2);
							cout << "*SLASH*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: ACK! ok ok you got me" << endl;
							sleep(2);
							cout << "The Random Hooded Stranger has taken 20 damage!" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well I guess I was wrong about you, good luck on your travels!" << endl;
							WeaponTrainerHealth -= 20;

						}
					}
				if(GodChoice == 5)
					{
						if(CalamityCounterAttack == 6)
						{
							
							sleep(2);
							cout << "*SLASH*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: ACK! ok ok you got me" << endl;
							sleep(2);
							cout << "The Random Hooded Stranger has taken 20 damage!" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well I guess I was wrong about you, good luck on your travels!" << endl;
							WeaponTrainerHealth -= 20;

						}
					}
				}
			else 
			{
				cout << "Enter a valid input" << endl;
				goto FightTrainingDefense;
			}
		if(WeaponTrainerHealth <= 0)
			{
				goto EarthRealmVortex;
			}
		else 
			{
				goto FightTrainingAttack;
			}
	FightTrainingAttack:
		sleep(2);
		cout << "Random Hooded Stranger: Alright now come at me!" << endl;
		sleep(2);
		cout << "Much like defense, attacking involves strategic decisions that will give you the edge in any fight" << endl;
		sleep(2);
		cout << "Again your skills right now are pretty basic but that will change over time" << endl;
		sleep(2);
		cout << "A stab is a basic maneuver that is hard to counter but easy to block and it also infilicts a decent amount to damage" << endl;
		sleep(2);
		cout << "A swipe is a very deadly maneuver but can be countered" << endl;
		sleep(2);
		cout << "A blunt assault depends on your strength, it can be very effective but it can also be blocked easily and cause you to become dazed" << endl;
		sleep(2);
		cout << "A dissarm could be a simple disarment of your enemy or a brutal dismemberment of your opponent" << endl;
		sleep(2); 
		cout << "Choose how you would like to attack your opponent" << endl;
		sleep(1);
	FightTrainingAttackMenu:
		cout << "Stab (1)" << endl;
		cout << "Swipe (2)" << endl;
		cout << "Blunt Assault (3)" << endl;
		cout << "Dissarm (4)" << endl;
		cin >> AttackChoice;
		if (AttackChoice == 1)
			{
				//make sure to add the sword damage plus base strength 
				cout << "Random Hooded Stranger: Bring it on, I can take it" << endl;
				if(GodChoice == 1)
					{
						if(LAttack + LStab + CurrentlyEquiped > 1)
						{
							cout << "*Crunch*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
							sleep(2);
							goto EarthRealmVortex;
						}
					}
				if(GodChoice == 2)
					{
						if(FAttack + FStab + CurrentlyEquiped > 1)
						{
							cout << "*Crunch*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
							sleep(2);
							goto EarthRealmVortex;
						}
					}
				if(GodChoice == 3)
					{
						if(NAttack + NStab + CurrentlyEquiped> 1)
						{
							cout << "*Crunch*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
							sleep(2);
							goto EarthRealmVortex;
						}
					}
				if(GodChoice == 4)
					{
						if(DAttack + DStab + CurrentlyEquiped> 1)
						{
							cout << "*Crunch*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
							sleep(2);
							goto EarthRealmVortex;
						}
					}
				if(GodChoice == 5)
				{
					if(CAttack + CStab + CurrentlyEquiped> 1)
					{
						cout << "*Crunch*" << endl;
						sleep(2);
						cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
						sleep(2);
						cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
						sleep(2);
						goto EarthRealmVortex;
					}
				}
			}
		if (AttackChoice == 2)
			{
				if(GodChoice == 1)
					{
						{
							if(LAttack + LSwipe + CurrentlyEquiped> 1)
							{
								cout << "*Crunch*" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
								sleep(2);
								goto EarthRealmVortex;
							}
						}
					}
				if(GodChoice == 2)
					{
						{
							if(FAttack + FSwipe + CurrentlyEquiped> 1)
							{
								cout << "*Crunch*" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
								sleep(2);
								goto EarthRealmVortex;
							}
						}
					}
				if(GodChoice == 3)
					{
						{
							if(NAttack + NSwipe + CurrentlyEquiped> 1)
							{
								cout << "*Crunch*" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
								sleep(2);
								goto EarthRealmVortex;
							}
						}
					}
				if(GodChoice == 4)
					{
						{
							if(DAttack + DSwipe + CurrentlyEquiped> 1)
							{
								cout << "*Crunch*" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
								sleep(2);
								goto EarthRealmVortex;
							}
						}
					}
				if(GodChoice == 5)
					{
						{
							if(CAttack + CSwipe + CurrentlyEquiped> 1)
							{
								cout << "*Crunch*" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
								sleep(2);
								goto EarthRealmVortex;
							}
						}
					}

			}
		if (AttackChoice == 3)
			{
				if(GodChoice == 1)
					{
						{
							if(LBlunt > 1)
							{
								cout << "*Crunch*" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
								sleep(2);
								goto EarthRealmVortex;
							}
						}
					}
				if(GodChoice == 2)
					{
						{
							if(FBlunt > 1)
							{
								cout << "*Crunch*" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
								sleep(2);
								goto EarthRealmVortex;
							}
						}
					}
				if(GodChoice == 3)
					{
						{
							if(NBlunt > 1)
							{
								cout << "*Crunch*" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
								sleep(2);
								goto EarthRealmVortex;
							}
						}
					}
				if(GodChoice == 4)
					{
						{
							if(DBlunt > 1)
							{
								cout << "*Crunch*" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
								sleep(2);
								goto EarthRealmVortex;
							}
						}
					}
				if(GodChoice == 5)
					{
						{
							if(CBlunt > 1)
							{
								cout << "*Crunch*" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Ok, Ok you got me... take it easy, this isn't a fight to the death" << endl;
								sleep(2);
								cout << "Random Hooded Stranger: Well it seems you were more prepared than I initially thought" << endl;
								sleep(2);
								goto EarthRealmVortex;
							}
						}
					}

			}
		if (AttackChoice == 4)
			{
				LifeDisarm = rand() % 4;
				FireDisarm = rand() % 3;
				NatureDisarm = rand() % 2;
				DeathDisarm = rand() % 3;
				CalamityDisarm = rand() % 1;
				if(GodChoice == 1)
					{
						if(LifeDisarm != 5)
						{
							WeaponTrainerAttack = 0;
							cout << "*Grab*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: ...." << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well you took my weapon so I surrender" <<endl;
							sleep(2);
							cout << "Random Hooded Stranger: Good luck!" << endl;
							goto EarthRealmVortex;
						}
					}
				if(GodChoice == 2)
					{
						if(FireDisarm != 5)
						{
							WeaponTrainerAttack = 0;
							cout << "*Grab*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: ...." << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well you took my weapon so I surrender" <<endl;
							sleep(2);
							cout << "Random Hooded Stranger: Good luck!" << endl;
							goto EarthRealmVortex;
						}

					}
				if(GodChoice == 3)
					{
						if(NatureDisarm != 5)
						{
							WeaponTrainerAttack = 0;
							cout << "*Grab*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: ...." << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well you took my weapon so I surrender" <<endl;
							sleep(2);
							cout << "Random Hooded Stranger: Good luck!" << endl;
							goto EarthRealmVortex;
						}

					}
				if(GodChoice == 4)
					{
						if(DeathDisarm != 5)
						{
							WeaponTrainerAttack = 0;
							cout << "*Grab*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: ...." << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well you took my weapon so I surrender" <<endl;
							sleep(2);
							cout << "Random Hooded Stranger: Good luck!" << endl;
							goto EarthRealmVortex;
						}

					}
				if(GodChoice == 5)
					{
						if(CalamityDisarm != 5)
						{
							WeaponTrainerAttack = 0;
							cout << "*Grab*" << endl;
							sleep(2);
							cout << "Random Hooded Stranger: ...." << endl;
							sleep(2);
							cout << "Random Hooded Stranger: Well you took my weapon so I surrender" <<endl;
							sleep(2);
							cout << "Random Hooded Stranger: Good luck!" << endl;
							goto EarthRealmVortex;
						}

					}
				else
					{
						cout << "Please enter a valid input" << endl;
						goto FightTrainingAttackMenu;
					}

			}
	ArmoryMain:
		if(GodChoice == 1)
			{
				if(ArmoryMainA == 0)
					{
						ArmoryMainA += 1;
						cout << "As a god of Life your armory isn't as glamorous as other but it will do" << endl;
						sleep(2);
						cout << "You enter a fine room fit to hold an abundance of armaments" << endl;
						sleep(2);
						goto ArmoryMainMenu;
					}
				if(ArmoryMainA == 1)
					{
						cout << "You enter your room of armaments" << endl;
						sleep(2);
						goto ArmoryMainMenu;
					}
			}
		if(GodChoice == 2)
			{
				if(ArmoryMainA == 0)
					{
						ArmoryMainA += 1;
						cout << "As a god of Fire your armory is lit with the embers of ferocity" << endl;
						sleep(2);
						cout << "You enter a fine room fit to hold an abundance of armaments" << endl;
						sleep(2);
						goto ArmoryMainMenu;

					}
				if(ArmoryMainA == 1)
					{
						cout << "You enter your room of armaments" << endl;
						sleep(2);
						goto ArmoryMainMenu;
					}
			}	
		if(GodChoice == 3)
			{
				if(ArmoryMainA == 0)
					{
						ArmoryMainA += 1;
						cout << "As a god of Nature your armory is built of the natural world around you" << endl;
						sleep(2);
						cout << "You enter a fine room fit to hold an abundance of armaments" << endl;
						sleep(2);
						goto ArmoryMainMenu;

					}
					if(ArmoryMainA == 1)
						{
							cout << "You enter your room of armaments" << endl;
							sleep(2);
							goto ArmoryMainMenu;
						}
			}
		if(GodChoice == 4)
			{
				if(ArmoryMainA == 0)
					{
						ArmoryMainA += 1;
						cout << "As a god of Death your armory is fit to hold weapons of destruction" << endl;
						sleep(2);
						cout << "You enter a fine room fit to hold an abundance of armaments" << endl;
						sleep(2);
						goto ArmoryMainMenu;
					}
					if(ArmoryMainA == 1)
						{
							cout << "You enter your room of armaments" << endl;
							sleep(2);
							goto ArmoryMainMenu;
						}
			}
		if(GodChoice == 5)
			{
				if(ArmoryMainA == 0)
					{
						ArmoryMainA += 1;
						cout << "As a god of Calamity your armory is the heart of your residence" << endl;
						sleep(2);
						cout << "You enter a fine room fit to hold an abundance of armaments" << endl;
						sleep(2);
						goto ArmoryMainMenu;
					}
				if(ArmoryMainA == 1)
					{
						cout << "You enter your room of armaments" << endl;
						sleep(2);
						goto ArmoryMainMenu;
					}
			}
			
	ArmoryMainMenu:
		cout << "How would you like to arm yourself" << endl;
		if(ArmoryMenu == 0)
			{
				cout << "You havn't collected any weapons" << endl;
				sleep(3);
				if(GodChoice == 1)
					{
						goto LifeHomeMenu;
					}
				if(GodChoice == 2)
					{
						goto FireHomeMenu;
					}
				if(GodChoice == 3)
					{
						goto NatureHomeMenu;
					}
				if(GodChoice == 4)
					{
						goto DeathHomeMenu;
					}
				if(GodChoice == 5) 
					{
						goto CalamityHomeMenu;
					}
				}
		if(InvetoryTrainerSword == 1)
			{
				
				cout << "A Basic Sharp Sword" << endl;
				cout << "A sword used for sparring (+10 Attack)" << endl;
				cout << "Type 'training sword' to equip it" << endl;
				sleep(2);
			}
		if(GoldGodDagger == 1)
			{
				cout << "A Golden Dagger" << endl;
				cout << "A dagger fit to be wielded by a god (+20 Attack)" << endl;
				cout << "Type 'gold dagger' to equip it" << endl; 
				sleep(2);
			}
		std::getline(std::cin, Equip);
				if(Equip == "gold dagger")
				{
					if(GoldDaggerDiscovered != 1)
						{
							sleep(2);
							cout << "Please enter a valid Entry" << endl;
							goto ArmoryMainMenu;
						}
					else 
						{
							CurrentlyEquiped = 20;
						}
				}
			if(Equip == "training sword")
				{
					if(TrainerSwordDiscovered != 1)
						{
							sleep(2);
							cout << "Please enter a valid Entry" << endl;
							goto ArmoryMainMenu;
						}
					else	
						{
							CurrentlyEquiped = 10;
						}
				}
			else 
				{
					sleep(2);
					cout << "Please enter a valid Entry" << endl;
					goto ArmoryMainMenu;
				}
			sleep(3);
			cout << "You have selected the " << Equip << " as your weapon" << endl;
			sleep(2);
			cout << "What would you like to do next" << endl;
			sleep(1);
			cout << "Go back to your home (1)" << endl;
			sleep(1);
			cout << "Equip another weapon (2)" << endl;
			sleep(1);
			cin >> ArmoryReturn;
			if (ArmoryReturn == 1)
				{
					if (GodChoice == 1)
						{
							goto LifeHomeMenu;
						}
					if (GodChoice == 1)
						{
							goto FireHomeMenu;
						}
					if (GodChoice == 1)
						{
							goto NatureHomeMenu;
						}
					if (GodChoice == 1)
						{
							goto DeathHomeMenu;
						}
					if (GodChoice == 1)
						{
							goto CalamityHomeMenu;
						}
				}
			if (ArmoryReturn == 2)
				{
					goto ArmoryMainMenu;
				}
			else 
				{
					while (ArmoryReturn != 1 || ArmoryReturn != 2)
						{
							sleep(2);
							cout << "Please enter a valid integer" << endl;
							cin >> ArmoryReturn;
								if (ArmoryReturn == 1)
									{
										if (GodChoice == 1)
											{
												goto LifeHomeMenu;
											}
										if (GodChoice == 1)
											{
												goto FireHomeMenu;
											}
										if (GodChoice == 1)
											{
												goto NatureHomeMenu;
											}
										if (GodChoice == 1)
											{
												goto DeathHomeMenu;
											}
										if (GodChoice == 1)
											{
												goto CalamityHomeMenu;
											}
									}
								if (ArmoryReturn == 2)
									{
										goto ArmoryMainMenu;
									}
						}
				}
		
		
				
	GodRealmCentrePlainMenu:
		if(GodRealmCentrePlain == 0)
		{
			GodRealmCentrePlain += 1;
			sleep(3);
			cout << "You stare out and observe the apparently infinite soft green grass" << endl;
			cout << "You see people lounging about, all very close to the tree though" << endl;
		}
	AppleTreeMenu:
		cout << "none" << endl;
	EarthOceanMain:
		cout << "none" << endl;
	EarthDesertMain:
		cout << "none" << endl;
	EarthCountryMain:
		cout << "none" << endl;
	EarthCityMain:
		cout << "none" << endl;
}


