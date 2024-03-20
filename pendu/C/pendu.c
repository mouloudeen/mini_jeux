#include "pendu.h"


char * F3[] = { "LOI",  "TAC",  "DER",  "ARE",  "FEU",  "MON",  "ZAD",  "CHU",  "ECU",  "LES",  "CES",  "TGV",  "NON",  "SEL",  "TUE",  "DIS",  "CAO",  "WWW",  "VAR",  "OUI",  "NIL",  "LAS",  "HIC",  "VIS",  "MOA",  "PCB",  "HOU",  "CAT",  "QHS",  "AIL",  "LDR",  "CCP",  "OGM",  "DYN",  "VHS",  "ILE",  "TON",  "VIH",  "REM",  "QSP",  "QSR",  "ORL",  "HLM",  "SIC",  "LEI",  "VAL",  "FIL",  "ROI",  "PAN",  "TRI",  "OUT",  "LIN",  "MJC",  "PFF",  "USA",  "IVG",  "MAS",  "FEM",  "ISF",  "RDS",  "VAN",  "SET",  "RIP",  "MOB",  "PHI",  "MAC",  "CON",  "RAY",  "AUX",  "CAC",  "ENA",  "MEG",  "OKA",  "PPM",  "WEB",  "BAI",  "PUR",  "BTS",  "RYE",  "BOF",  "MIN",  "DON",  "AEG",  "AOF",  "ZEP",  "SUE",  "FUT",  "SOS",  "NIB",  "JUS",  "COM",  "COL",  "BIS",  "TIN",  "DUO",  "TOI",  "CMU",  "ARC",  "PIF",  "MER"};

char * F4[] = { "ZEN",  "RDS",  "EGEE",  "VOIR",  "KATA",  "CECI",  "TRI",  "EURL",  "FELE",  "LADY",  "AMOU",  "APIC",  "FEU",  "EURE",  "MITE",  "TELE",  "WHIP",  "ULM",  "PIEU",  "OUED",  "SAKI",  "RIVE",  "ETAU",  "OSSU",  "TAN",  "MORS",  "PIPE",  "RAGE",  "MOL",  "NAOS",  "PUE",  "ZEE",  "NIXE",  "GAEC",  "LORS",  "AMOS",  "NOIX",  "AREU",  "SSBS",  "GOBE",  "PULL",  "ASPI",  "LEGS",  "CARO",  "EWE",  "AYME",  "POIS",  "OREE",  "BATE",  "MTS",  "CONE",  "UREE",  "MARS",  "SEAU",  "CIEL",  "LIVE",  "BOOK",  "GNL",  "TEUF",  "QUIA",  "AMAS",  "NABI",  "FRIA",  "TPE",  "QHS",  "AMR",  "AHUN",  "CINQ",  "AXIS",  "ETAL",  "IRBM",  "CIL",  "LEZ",  "HECT",  "KEUF",  "ACCU",  "MACH",  "AFIN",  "KART",  "THUG",  "MELE",  "RAP",  "VOIX",  "VIS",  "PETE",  "ANAL",  "ETA",  "FILE",  "OBUS",  "BODY",  "RNIS",  "RMA",  "YACK",  "TUTU",  "CRAC",  "NOEL",  "PPM",  "PESE",  "VIF",  "BOL"};

char * F5[] = { "VIDEO",  "BAKIN",  "ROUAN",  "SINUE",  "MITAN",  "TOLET",  "TALEE",  "AYTRE",  "JASER",  "REDAN",  "ORPIN",  "VALVE",  "GYRIN",  "FEDOR",  "RABOT",  "FUTEE",  "BASHO",  "CEARA",  "MIGRE",  "CAPUA",  "ADIEU",  "GALBE",  "NURSE",  "DOTER",  "CUMIN",  "PENNY",  "FEMME",  "BERYL",  "FLOUE",  "BOBET",  "CURIE",  "AVISE",  "SPATH",  "CONNE",  "CADUC",  "CYBER",  "AMYOT",  "CARDE",  "YEUSE",  "BLETZ",  "COPAL",  "APIOL",  "ETIER",  "ERBUE",  "TOLLE",  "LOYAL",  "RANCH",  "VIVRE",  "TAGME",  "FORME",  "BIGLE",  "PUTTO",  "SEXTE",  "HONTE",  "GARDE",  "BENAT",  "SASSE",  "COUVE",  "CABUS",  "AMMON",  "FIANT",  "BANAL",  "ETETE",  "NOESE",  "FARON",  "GUAIS",  "DREGE",  "FLEAU",  "REBUT",  "NITRE",  "SAROD",  "CABAN",  "GIVRE",  "MAMMY",  "LOPIN",  "SANTE",  "PALAN",  "POQUE",  "SERIN",  "POINT",  "BOGUE",  "ESSEY",  "KAPPA",  "SUIVI",  "FEULE",  "ELEGI",  "VANNE",  "JAINE",  "DEVIN",  "SAGOU",  "GOUET",  "ENEMA",  "HELIO",  "PANER",  "AHVAZ",  "EPIRE",  "CITER",  "HERBE",  "TACON",  "PORNO"};

char * F6[] = { "PERONE",  "CREMER",  "GRIFFE",  "PONTET",  "EMMURE",  "CREUSE",  "QUETER",  "ESSORE",  "ADRIAN",  "JETANT",  "DELICE",  "ELODEE",  "ACHEEN",  "SAMOAN",  "CELANT",  "SAURIS",  "AUGIER",  "LARBIN",  "ERODER",  "DESILE",  "CUISSE",  "HONGRE",  "BOSSER",  "CONARD",  "PRIANT",  "OUTREE",  "FARCOT",  "SURATE",  "OSMIUM",  "MOLETE",  "BILANT",  "ALESEE",  "CAMERA",  "NENIES",  "LAMBIC",  "CAPONE",  "CAICOS",  "COINCE",  "ALADIN",  "LUZULE",  "CAURES",  "RIMAYE",  "OEUVRE",  "METEIL",  "MACLER",  "COUDRE",  "BHOPAL",  "SAGAIE",  "TICKET",  "LONGER",  "YOURTE",  "FERNEY",  "MAMELU",  "LUXURE",  "ANNALE",  "FLECHE",  "FEINTE",  "PLEINE",  "DEFILE",  "JUCHEE",  "PONCHO",  "CLIQUE",  "TANNEE",  "NATTER",  "RAFIOT",  "ENVOLE",  "LUCIDE",  "XANTHI",  "VIRURE",  "VELANI",  "FANAGE",  "DENIER",  "CORTES",  "DIKTAT",  "MASSUE",  "CANYON",  "GELIVE",  "AURORE",  "SORTIE",  "TAPAGE",  "BROYER",  "NASALE",  "DUPEUR",  "NYMPHE",  "LARYNX",  "BORDER",  "TRIPES",  "COUREE",  "VOLETE",  "MASSIF",  "VIRION",  "POUSSE",  "BOURDE",  "KUNGFU",  "BIMBOS",  "CRANTE",  "TURBOT",  "IMPAYE",  "CARNEE",  "BUSQUE"};

char * F7[] = { "CAJOLER",  "DELILLE",  "ENVOILE",  "SCIANTE",  "BANQUET",  "DRUMMER",  "SURLOUE",  "CAMARET",  "SOULARD",  "RESILLE",  "CASTRAT",  "GOUTTES",  "DOULEUR",  "ARDOISE",  "APHONIE",  "AFFLOUE",  "VOCATIF",  "TANAGRA",  "PRAKRIT",  "SINOPLE",  "MAKAIRE",  "SUPPLEE",  "BLATERE",  "LEVANTE",  "SIAMANG",  "CALMANT",  "RENOVER",  "PIQUANT",  "AQUILEE",  "NOUVEAU",  "SEBACEE",  "CEMENTE",  "TRIPLET",  "DEPETRE",  "ARBUSTE",  "ABYSSAL",  "RELANCE",  "SOUDAGE",  "AFFLUER",  "TUBIFEX",  "RELUQUE",  "CLIGNER",  "CLAMECE",  "CROTTEE",  "GOMMEUX",  "NAGEUSE",  "ACHALEE",  "GRIMPER",  "DROGMAN",  "EFFENDI",  "PIETANT",  "FAITOUT",  "PUCCINI",  "SLOUGHI",  "AURIFIE",  "PECTINE",  "CADUQUE",  "FUNEBRE",  "REVOICI",  "JAILLIR",  "POURRIR",  "COSAQUE",  "PLATRES",  "DROGUER",  "AMIRAUX",  "RUBEOLE",  "JABOTER",  "RETENTE",  "CHOREGE",  "DEPASSE",  "BILLERE",  "PREORAL",  "ETRIPER",  "FALIERO",  "SIMPLET",  "HUMILIE",  "STRIURE",  "DEGAZER",  "DEFUNTE",  "EMETINE",  "CHOPANT",  "GARANTE",  "CHARRUE",  "VANTAUX",  "NARTHEX",  "EMBATTU",  "CARDAGE",  "TONTINE",  "TABLARD",  "AGRAINE",  "INTACTE",  "GAUFRER",  "JETSETS",  "CERNANT",  "DECERNE",  "RECLUSE",  "CAJETAN",  "CAMBERT",  "CAIROTE",  "ENSERRE"};

char * F8[] = { "FLOREALS",  "MANDORLE",  "TARTUFFE",  "MALSAINE",  "PANACHER",  "MAFFIOSI",  "SEXTETTE",  "SIFFLANT",  "CAMOUFLE",  "OPTICIEN",  "DENIVELE",  "AFFIXALE",  "PIVOTANT",  "TRIPARTI",  "BELCANTO",  "AMEUBLIR",  "ACERBITE",  "BOUGEOIR",  "SUFFIXAL",  "EPICIERE",  "CHAMELLE",  "FROISSER",  "MODELISE",  "CUPRIQUE",  "COEDITER",  "CAILLOUX",  "OBSTINEE",  "PSYCHOSE",  "CLAQUAGE",  "SOUDEUSE",  "FEUILLUE",  "TRACHEAL",  "ARANEIDE",  "DENONCER",  "HELIGARE",  "TUTEURER",  "ALKERMES",  "FASEYANT",  "PEDIMENT",  "DOUBLEAU",  "ACCOUCHE",  "GUIGNANT",  "BORIQUEE",  "DIFFERER",  "TELETYPE",  "RESSAUTE",  "DEFILANT",  "TEMPETER",  "PRESURER",  "COMMUTER",  "ETAGEANT",  "LEGUMIER",  "EMPENNER",  "PREDELLE",  "DERMIQUE",  "COUGOUAR",  "ARLANDES",  "GIRODYNE",  "SOULAUDE",  "HUMIDITE",  "SEXRATIO",  "SINUSAUX",  "ACTIONNE",  "DEVERSER",  "AMENSAUX",  "ETARQUER",  "DECOCHER",  "SOUCIEUX",  "SURFAIRE",  "ANDERSON",  "CHIOURME",  "PALLEALE",  "ROSSOLIS",  "TRICARDE",  "BIARROTE",  "SCABIEUX",  "POSTURAL",  "TREIGNAC",  "HISTOIRE",  "ALICANTE",  "RECUSANT",  "VEXATION",  "LARGESSE",  "INALPAGE",  "PARTANCE",  "HABITUEE",  "BONICHON",  "LEVRONNE",  "ENTABLER",  "CYCLISME",  "SAPONITE",  "CAFETIER",  "LUTHISTE",  "CHAFOUIN",  "IMAGINAL",  "QUEUTANT",  "MORGUANT",  "REVOYANT",  "RELACHEE",  "LARGUEUR"};

char * F9[] = { "SOCIALITE",  "LEVANTINE",  "INFECTANT",  "OFFICINAL",  "FACTIEUSE",  "PARECHOCS",  "DERMATITE",  "DEJANTANT",  "HAMBURGER",  "INCURABLE",  "HELLENISE",  "DECOMBRES",  "BRANLANTE",  "LIMOGEANT",  "RECEPISSE",  "BRISEMENT",  "DAMOISEAU",  "ENCROUTEE",  "DEGUEULER",  "RESERVOIR",  "TRAINEUSE",  "FANSCLUBS",  "ACQUERANT",  "BOYCOTTER",  "MANIFESTE",  "HEXACORDE",  "HIVERNANT",  "GESTICULE",  "CHANTOUNG",  "FERRYBOAT",  "ETIQUETER",  "ARGOTISME",  "EMULSIFIE",  "CROQUETTE",  "PREVOYANT",  "BARHILLEL",  "SYNGNATHE",  "PEGMATITE",  "CABALISTE",  "RETRACTER",  "JUDAICITE",  "HIVERNALE",  "ENDEMISME",  "HAVISSANT",  "DECOLORER",  "YACHTSMEN",  "EURYTHMIE",  "OBSCURITE",  "TABLETIER",  "OUTILLANT",  "VASTEMENT",  "PACKAGEUR",  "COLLODION",  "IONIENNES",  "RENIFORME",  "LARYNGITE",  "PRESEANCE",  "SATELLISE",  "ACTIVISTE",  "RABAISSER",  "EMPIRISME",  "COURTSJUS",  "ECHAUDAGE",  "ISOLATEUR",  "ARCHIVANT",  "EVISCERER",  "LAPINIERE",  "CASSEPIPE",  "DEPEINDRE",  "DEPENDANT",  "COUCHERIE",  "LIVRAISON",  "CONCAVITE",  "DILATANTE",  "BENINCITY",  "HISTAMINE",  "DECILITRE",  "TOURNEUSE",  "ANNONCANT",  "ESCROQUER",  "REQUERANT",  "CAMBUSIER",  "RATTACHER",  "VERIFIEUR",  "MANGANITE",  "SESAMOIDE",  "FACTICITE",  "BAILLONNE",  "BIDONNAGE",  "CLAMECANT",  "PERINEALE",  "PROPRIETE",  "ECLIPSANT",  "ARTHRODIE",  "CAILLASSE",  "ARDENNAIS",  "LEVRETTEE",  "CEDRATIER",  "MYELINISE",  "OREILLARD"};

char * F10[] = { "HERBORISER",  "CHOLEDOQUE",  "SUSPENDANT",  "CLAPISSANT",  "SYNCYTIALE",  "SUCCINIQUE",  "DIFFUSEUSE",  "OBTURATEUR",  "FINIGUERRA",  "FLOCONNANT",  "SUPPOSABLE",  "PICAILLONS",  "MACADAMISE",  "BADIGEONNE",  "MACHINISTE",  "OISELLERIE",  "PAPILLOTER",  "MICROCLINE",  "ELANCEMENT",  "DERAILLEUR",  "ADULTERINE",  "PORTEMINES",  "CANONICITE",  "NEWYORKAIS",  "EMPEGUIONS",  "ARRANGEANT",  "OBLITERANT",  "SAISISSANT",  "BOULEDOGUE",  "DISJOINDRE",  "DOMINICALE",  "INGURGITER",  "BHADRAVATI",  "OUTRAGEUSE",  "RESTITUANT",  "PREFERABLE",  "DESENCLAVE",  "CAMBODGIEN",  "COMMENCANT",  "MARECHALAT",  "PREFECTURE",  "CREOLISANT",  "SUBTERFUGE",  "INDENIABLE",  "DEMUTISANT",  "INNOMMABLE",  "VIEILLESSE",  "NUMEROTAGE",  "DENEGATION",  "DIABLEMENT",  "DEPOTVENTE",  "RANDONNANT",  "ASPHYXIANT",  "STABILISER",  "DECLIQUETE",  "BOULOCHANT",  "BICYCLETTE",  "STIPULANTE",  "STUPEFIANT",  "PYRENEENNE",  "SATYRIASIS",  "MIGNARDISE",  "RECRUTEUSE",  "BROUILLARD",  "CLIGNEMENT",  "COURTISANT",  "DISSUADANT",  "REEDUQUANT",  "ANTENATALE",  "BALLOTTANT",  "ARYTENOIDE",  "PREDICABLE",  "REFOUILLER",  "EMERVEILLE",  "PERINATALE",  "BARNEVILLE",  "PROVISORAT",  "LISIBILITE",  "CASSOLETTE",  "PASSIONNEE",  "ASTROLOGUE",  "MEMORIELLE",  "PENSIONNEE",  "COEXTENSIF",  "COMPRESSER",  "TAIKONAUTE",  "ENCENSEUSE",  "LIBIDINAUX",  "PHILOLOGUE",  "EPINEURIEN",  "CAVALCANTI",  "PAUPERISER",  "MONOPHONIE",  "CHARPENTEE",  "CYRILLIQUE",  "CATHEDRAUX",  "COUVREPLAT",  "DEMOBILISE",  "DESERTIFIE",  "PREPENSION"};

char * F20[] = { "MAQUIGNONNE",  "SPATIONAUTE",  "REVEILLONNER",  "NEOIMPRESSIONNISME",  "MUSICOGRAPHE",  "COAGULATION",  "FONDAMENTAUX",  "SOUSDIACONAT",  "DEPHOSPHORE",  "INDISCUTABLE",  "PROSCRIPTION",  "TAICHICHUAN",  "BLANCHISSEMENT",  "HYSTEROSALPINGOGRAPHIE",  "INTERSESSION",  "GAUCHISANTE",  "ARRANGEMENT",  "WATERCLOSET",  "ARTHEZDEBEARN",  "ENTREPRENEURIAL",  "MONTMORENCY",  "SOUSJACENTS",  "TESTIMONIAUX",  "RAISONNABLEMENT",  "CIRCONSTANCIEE",  "BRILLANTEUR",  "CHAUFFEPLAT",  "AFFECTIONNEE",  "LITHOTYPOGRAPHIE",  "DEVELOPPANTE",  "EXCOMMUNIEE",  "ANAGLYPTIQUE",  "GLYCERINANT",  "PASSINGSHOT",  "DESAGREGATION",  "FRANCSALLEUX",  "INDISTINCTE",  "TELETRANSMISSION",  "CARBONISAGE",  "BELLIGERANT",  "OPERACOMIQUE",  "CUMULODOMES",  "SERPENTIFORME",  "CARRENODEMIRANDA",  "REFRIGERANT",  "PROTOZOAIRE",  "REPIPASSENT",  "EUROPEOCENTRISME",  "BELLIQUEUSE",  "DEPLACEMENT",  "PHENOBARBITAL",  "POINCONNEUSE",  "GENERALEMENT",  "TROUILLARDE",  "COMPATISSANT",  "ADMINISTRER",  "TELEREALITE",  "LIEUTENANTGOUVERNEUR",  "MONOCATENAIRE",  "CORNELIENNE",  "TETANISATION",  "TOXICOLOGUE",  "INTELLIGENTE",  "TRANSFORMABLE",  "BESSANCOURT",  "QUESTIONNAIRE",  "NONACCOMPLIE",  "TRANSPOSITEUR",  "CHARLATANESQUE",  "RETICULOENDOTHELIAL",  "CALESETALONS",  "DEQUALIFICATION",  "AGUASCALIENTES",  "SOLILOQUANT",  "CONSTANTINIEN",  "CONGEDIEMENT",  "DECOLONISATION",  "ANURADHAPURA",  "BARAQUEVILLE",  "FACTIONNAIRE",  "PRATIQUEMENT",  "DECIMALISER",  "ENDOCRINOLOGUE",  "ISOLATIONNISTE",  "DESORGANISATEUR",  "ADMINISTRATIVEMENT",  "ENDOTHELIAL",  "THEOLOGIQUEMENT",  "SOCIOCRITIQUE",  "ASSERVISSANTE",  "PROCLAMATION",  "SPATIABILISER",  "ROBOTICIENNES",  "CONTREBALANCER",  "BIOTHERAPIE",  "ARBITRALEMENT",  "SAINTEBARBE",  "SUBCONSCIENT",  "GYMNASTIQUE",  "CAPORALISER"};


void flush_buffer()
{
int c = 0;

while (c != '\n' && c != EOF)
c = getchar();
}

/* Les images du pendu*/
void  hommePendu(int erreur){
    switch(erreur){
            
        case 10:
            printf("         ");
            printf("         ");
            printf("         ");
            printf("         ");
            printf("         ");
            printf("         ");
            printf("         ");
            printf("         \n");
            break;
        case 9:
            printf("                \n");
            printf("                \n");
            printf("                \n");
            printf("                \n");
            printf("                \n");
            printf("                \n");
            printf("                \n");
            printf("_________       \n");
            break;
            
        case 8:
            printf("                \n");
            printf("                \n");
            printf("                \n");
            printf("                \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("____|____       \n");
            break;
            
        case 7:
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("____|____       \n");
            break;
            
        case 6:
            printf("    _________   \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("____|____       \n");
            break;
            
        case 5:
            printf("    _________   \n");
            printf("    |        |  \n");
            printf("    |        |  \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("____|____       \n");
            break;
            
        case 4:
            printf("    _________   \n");
            printf("    |        |  \n");
            printf("    |        |  \n");
            printf("    |        O  \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("____|____       \n");
            break;
            
        case 3:
            printf("    _________   \n");
            printf("    |        |  \n");
            printf("    |        |  \n");
            printf("    |        O  \n");
            printf("    |        |  \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("____|____       \n");
            break;
            
        case 2:
            printf("    _________   \n");
            printf("    |        |  \n");
            printf("    |        |  \n");
            printf("    |        O  \n");
            printf("    |       /|\\ \n");
            printf("    |           \n");
            printf("    |           \n");
            printf("____|____       \n");
            break;
            
        case 1:
            printf("    _________   \n");
            printf("    |        |  \n");
            printf("    |        |  \n");
            printf("    |        O  \n");
            printf("    |       /|\\ \n");
            printf("    |        |  \n");
            printf("    |           \n");
            printf("____|____       \n");
            break;
            
            
        case 0:
            printf("    _________   \n");
            printf("    |        |  \n");
            printf("    |        |  \n");
            printf("    |        O  \n");
            printf("    |       /|\\ \n");
            printf("    |        |  \n");
            printf("    |       / \\ \n");
            printf("____|____       \n");
            break;
            
    }
}

/* Il donne un mot à chercher*/
void cherche_mot(char * mot, int taille,int essaies){
   
    
    
    printf("le mot cherché est composé de %d lettres\n", taille);
    char saisie_utilisateur[taille+1];
    
    
    
    /*The word found in case the exact word is not given*/
    char mot_trouve[taille+1];
    
   
    for (char *ptr3 = mot_trouve; ptr3 < mot_trouve + taille +1;ptr3++){
        /* word is initialized*/
        *ptr3 = '-';
        
        if (ptr3 == mot_trouve +taille){
            /*We don't forget the last of the string*/
            *ptr3 = '\0';
        }
    }
    
    
    while (( essaies > 0) && (strcmp(mot_trouve, mot) != 0) && strcmp(saisie_utilisateur, mot)!= 0)
    /*As long as life > 0 and word and seizure are secret word difference, we stay in the loop*/
    {
        /* We use the pointer for change the world by letters found*/
        char *ptr2 = NULL;
        
        ptr2 = mot_trouve;
        
        /* counter cpt initialized to 0*/
        int cpt = 0;
        
        
        
        /*max size of the buffer saisie_utilisateur*/
        taille = taille + 1;
        
        printf("donner une lettre ou le mot exacte , il vous reste %d erreurs possibles\n",essaies);
        /*printf("Si vous proposez une lettre valide 2 fois sinon pour le mot valide qu'une fois : ");*/
        fgets(saisie_utilisateur, taille, stdin);
        
        /*Refresh our buffer*/
        /*flush_buffer();*/
        
        
        for (char* ptr= mot;ptr < mot+taille;ptr++){
            /* On cherche les lettres dans le mot ou on compare le mot_trouve avec le mot*/
            
            if (strlen(saisie_utilisateur)!=2){
                
               if(strcmp(saisie_utilisateur, mot)!=0){
                /*if saisie_utilisateur n'est pas un   char et saisie_utilisateur est different du mot*/
                   cpt = 0;
            }
               else{
                   cpt = 1;
                   break;
               }
            }
           
            else if (toupper(*ptr) == toupper(*saisie_utilisateur)){
                /*si les lettres sont dans le mot on ajoute à cpt 1*/
                *ptr2 = toupper(*saisie_utilisateur);
                cpt+=1;
                }
            
            ptr2++;
        }
        
        
        if (cpt ==0){
            /*si cpt = 0, nous n'avons aucune lettre de ce mot, on perd 1 essaie*/
            essaies -= 1;
            
        }
        hommePendu(essaies);
        printf("%s\n",mot_trouve);
        
    }
    
    
    if (strcmp(mot, mot_trouve) == 0 || strcmp(saisie_utilisateur, mot) ==0){
        /* si le mot_trouve ou le saisie_utilisateur est égale au mot, on a gagné*/
        printf("vous avez gagné en ayant vos %d vie(s)", essaies);
    }
    
    else
    {
        printf("Vous avez perdu, le mot qui fallait trouver :  %s\n",mot);
    }
    
}

/* recommencer*/
void recommencer(){
    char choix1;
    printf("voulez-vous recommencer ?(o/n)\n");
    fgets(&choix1, 2, stdin);
    printf("%c\n", choix1);
    switch(choix1){
        case 'o':
        case 'O':
            pendu();
            break;
        case 'n':
            printf("Au revoir à bientôt\n");
            exit(0);
            break;
        default:
            recommencer();
            
    }
}

/* le pendu*/
void pendu(){
    srand(time(NULL));
    char choix[3] ;
    int i;
     
    printf("Combien de lettres qui soit superieur et égale à 3 vous voulez pour votre mot:\n");
    
    fgets(choix, 3, stdin);
    
    /* transformation en int*/
    int n = atoi(choix);
    
    
    /* Les valeurs impossibles */
    if ((n == 1) || (n == 2) || (n == 0)){
        pendu();
    }
    
    /* on prend un indice aléatoire  entre 0 et 99 */
    i = rand()%100;
    
    /* Chaque nombre est associé à une liste*/
    switch (n){
        
        case 3:
            cherche_mot(F3[i],strlen(F3[i]),10);
            break;
        case 4:
            cherche_mot(F4[i],strlen(F4[i]),10);
            break;
        case 5:
            cherche_mot(F5[i],strlen(F5[i]),10);
            break;
        case 6:
            
            cherche_mot(F6[i],strlen(F6[i]),10);
            break;
        case 7:
            cherche_mot(F7[i],strlen(F7[i]),10);
            break;
        case 8:
            cherche_mot(F8[i],strlen(F8[i]),10);
            break;
        case 9:
            cherche_mot(F9[i],strlen(F9[i]),10);
            break;
        case 10:
            cherche_mot(F10[i],strlen(F10[i]),10);
            break;
        default:
            cherche_mot(F20[i],strlen(F20[i]),10);
            
    }
    
    /* Propose si on veut recommencer*/
    recommencer();
    
    
    
    
        
    
    
    
}

