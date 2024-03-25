#include "pendu_jeux.hpp"


static char * F3[] = { "LOI",  "TAC",  "DER",  "ARE",  "FEU",  "MON",  "ZAD",  "CHU",  "ECU",  "LES",  "CES",  "TGV",  "NON",  "SEL",  "TUE",  "DIS",  "CAO",  "WWW",  "VAR",  "OUI",  "NIL",  "LAS",  "HIC",  "VIS",  "MOA",  "PCB",  "HOU",  "CAT",  "QHS",  "AIL",  "LDR",  "CCP",  "OGM",  "DYN",  "VHS",  "ILE",  "TON",  "VIH",  "REM",  "QSP",  "QSR",  "ORL",  "HLM",  "SIC",  "LEI",  "VAL",  "FIL",  "ROI",  "PAN",  "TRI",  "OUT",  "LIN",  "MJC",  "PFF",  "USA",  "IVG",  "MAS",  "FEM",  "ISF",  "RDS",  "VAN",  "SET",  "RIP",  "MOB",  "PHI",  "MAC",  "CON",  "RAY",  "AUX",  "CAC",  "ENA",  "MEG",  "OKA",  "PPM",  "WEB",  "BAI",  "PUR",  "BTS",  "RYE",  "BOF",  "MIN",  "DON",  "AEG",  "AOF",  "ZEP",  "SUE",  "FUT",  "SOS",  "NIB",  "JUS",  "COM",  "COL",  "BIS",  "TIN",  "DUO",  "TOI",  "CMU",  "ARC",  "PIF",  "MER"};

static char * F4[] = { "ZEN",  "RDS",  "EGEE",  "VOIR",  "KATA",  "CECI",  "TRI",  "EURL",  "FELE",  "LADY",  "AMOU",  "APIC",  "FEU",  "EURE",  "MITE",  "TELE",  "WHIP",  "ULM",  "PIEU",  "OUED",  "SAKI",  "RIVE",  "ETAU",  "OSSU",  "TAN",  "MORS",  "PIPE",  "RAGE",  "MOL",  "NAOS",  "PUE",  "ZEE",  "NIXE",  "GAEC",  "LORS",  "AMOS",  "NOIX",  "AREU",  "SSBS",  "GOBE",  "PULL",  "ASPI",  "LEGS",  "CARO",  "EWE",  "AYME",  "POIS",  "OREE",  "BATE",  "MTS",  "CONE",  "UREE",  "MARS",  "SEAU",  "CIEL",  "LIVE",  "BOOK",  "GNL",  "TEUF",  "QUIA",  "AMAS",  "NABI",  "FRIA",  "TPE",  "QHS",  "AMR",  "AHUN",  "CINQ",  "AXIS",  "ETAL",  "IRBM",  "CIL",  "LEZ",  "HECT",  "KEUF",  "ACCU",  "MACH",  "AFIN",  "KART",  "THUG",  "MELE",  "RAP",  "VOIX",  "VIS",  "PETE",  "ANAL",  "ETA",  "FILE",  "OBUS",  "BODY",  "RNIS",  "RMA",  "YACK",  "TUTU",  "CRAC",  "NOEL",  "PPM",  "PESE",  "VIF",  "BOL"};

static char * F5[] = { "VIDEO",  "BAKIN",  "ROUAN",  "SINUE",  "MITAN",  "TOLET",  "TALEE",  "AYTRE",  "JASER",  "REDAN",  "ORPIN",  "VALVE",  "GYRIN",  "FEDOR",  "RABOT",  "FUTEE",  "BASHO",  "CEARA",  "MIGRE",  "CAPUA",  "ADIEU",  "GALBE",  "NURSE",  "DOTER",  "CUMIN",  "PENNY",  "FEMME",  "BERYL",  "FLOUE",  "BOBET",  "CURIE",  "AVISE",  "SPATH",  "CONNE",  "CADUC",  "CYBER",  "AMYOT",  "CARDE",  "YEUSE",  "BLETZ",  "COPAL",  "APIOL",  "ETIER",  "ERBUE",  "TOLLE",  "LOYAL",  "RANCH",  "VIVRE",  "TAGME",  "FORME",  "BIGLE",  "PUTTO",  "SEXTE",  "HONTE",  "GARDE",  "BENAT",  "SASSE",  "COUVE",  "CABUS",  "AMMON",  "FIANT",  "BANAL",  "ETETE",  "NOESE",  "FARON",  "GUAIS",  "DREGE",  "FLEAU",  "REBUT",  "NITRE",  "SAROD",  "CABAN",  "GIVRE",  "MAMMY",  "LOPIN",  "SANTE",  "PALAN",  "POQUE",  "SERIN",  "POINT",  "BOGUE",  "ESSEY",  "KAPPA",  "SUIVI",  "FEULE",  "ELEGI",  "VANNE",  "JAINE",  "DEVIN",  "SAGOU",  "GOUET",  "ENEMA",  "HELIO",  "PANER",  "AHVAZ",  "EPIRE",  "CITER",  "HERBE",  "TACON",  "PORNO"};

static char * F6[] = { "PERONE",  "CREMER",  "GRIFFE",  "PONTET",  "EMMURE",  "CREUSE",  "QUETER",  "ESSORE",  "ADRIAN",  "JETANT",  "DELICE",  "ELODEE",  "ACHEEN",  "SAMOAN",  "CELANT",  "SAURIS",  "AUGIER",  "LARBIN",  "ERODER",  "DESILE",  "CUISSE",  "HONGRE",  "BOSSER",  "CONARD",  "PRIANT",  "OUTREE",  "FARCOT",  "SURATE",  "OSMIUM",  "MOLETE",  "BILANT",  "ALESEE",  "CAMERA",  "NENIES",  "LAMBIC",  "CAPONE",  "CAICOS",  "COINCE",  "ALADIN",  "LUZULE",  "CAURES",  "RIMAYE",  "OEUVRE",  "METEIL",  "MACLER",  "COUDRE",  "BHOPAL",  "SAGAIE",  "TICKET",  "LONGER",  "YOURTE",  "FERNEY",  "MAMELU",  "LUXURE",  "ANNALE",  "FLECHE",  "FEINTE",  "PLEINE",  "DEFILE",  "JUCHEE",  "PONCHO",  "CLIQUE",  "TANNEE",  "NATTER",  "RAFIOT",  "ENVOLE",  "LUCIDE",  "XANTHI",  "VIRURE",  "VELANI",  "FANAGE",  "DENIER",  "CORTES",  "DIKTAT",  "MASSUE",  "CANYON",  "GELIVE",  "AURORE",  "SORTIE",  "TAPAGE",  "BROYER",  "NASALE",  "DUPEUR",  "NYMPHE",  "LARYNX",  "BORDER",  "TRIPES",  "COUREE",  "VOLETE",  "MASSIF",  "VIRION",  "POUSSE",  "BOURDE",  "KUNGFU",  "BIMBOS",  "CRANTE",  "TURBOT",  "IMPAYE",  "CARNEE",  "BUSQUE"};

static char * F7[] = { "CAJOLER",  "DELILLE",  "ENVOILE",  "SCIANTE",  "BANQUET",  "DRUMMER",  "SURLOUE",  "CAMARET",  "SOULARD",  "RESILLE",  "CASTRAT",  "GOUTTES",  "DOULEUR",  "ARDOISE",  "APHONIE",  "AFFLOUE",  "VOCATIF",  "TANAGRA",  "PRAKRIT",  "SINOPLE",  "MAKAIRE",  "SUPPLEE",  "BLATERE",  "LEVANTE",  "SIAMANG",  "CALMANT",  "RENOVER",  "PIQUANT",  "AQUILEE",  "NOUVEAU",  "SEBACEE",  "CEMENTE",  "TRIPLET",  "DEPETRE",  "ARBUSTE",  "ABYSSAL",  "RELANCE",  "SOUDAGE",  "AFFLUER",  "TUBIFEX",  "RELUQUE",  "CLIGNER",  "CLAMECE",  "CROTTEE",  "GOMMEUX",  "NAGEUSE",  "ACHALEE",  "GRIMPER",  "DROGMAN",  "EFFENDI",  "PIETANT",  "FAITOUT",  "PUCCINI",  "SLOUGHI",  "AURIFIE",  "PECTINE",  "CADUQUE",  "FUNEBRE",  "REVOICI",  "JAILLIR",  "POURRIR",  "COSAQUE",  "PLATRES",  "DROGUER",  "AMIRAUX",  "RUBEOLE",  "JABOTER",  "RETENTE",  "CHOREGE",  "DEPASSE",  "BILLERE",  "PREORAL",  "ETRIPER",  "FALIERO",  "SIMPLET",  "HUMILIE",  "STRIURE",  "DEGAZER",  "DEFUNTE",  "EMETINE",  "CHOPANT",  "GARANTE",  "CHARRUE",  "VANTAUX",  "NARTHEX",  "EMBATTU",  "CARDAGE",  "TONTINE",  "TABLARD",  "AGRAINE",  "INTACTE",  "GAUFRER",  "JETSETS",  "CERNANT",  "DECERNE",  "RECLUSE",  "CAJETAN",  "CAMBERT",  "CAIROTE",  "ENSERRE"};

static char * F8[] = { "FLOREALS",  "MANDORLE",  "TARTUFFE",  "MALSAINE",  "PANACHER",  "MAFFIOSI",  "SEXTETTE",  "SIFFLANT",  "CAMOUFLE",  "OPTICIEN",  "DENIVELE",  "AFFIXALE",  "PIVOTANT",  "TRIPARTI",  "BELCANTO",  "AMEUBLIR",  "ACERBITE",  "BOUGEOIR",  "SUFFIXAL",  "EPICIERE",  "CHAMELLE",  "FROISSER",  "MODELISE",  "CUPRIQUE",  "COEDITER",  "CAILLOUX",  "OBSTINEE",  "PSYCHOSE",  "CLAQUAGE",  "SOUDEUSE",  "FEUILLUE",  "TRACHEAL",  "ARANEIDE",  "DENONCER",  "HELIGARE",  "TUTEURER",  "ALKERMES",  "FASEYANT",  "PEDIMENT",  "DOUBLEAU",  "ACCOUCHE",  "GUIGNANT",  "BORIQUEE",  "DIFFERER",  "TELETYPE",  "RESSAUTE",  "DEFILANT",  "TEMPETER",  "PRESURER",  "COMMUTER",  "ETAGEANT",  "LEGUMIER",  "EMPENNER",  "PREDELLE",  "DERMIQUE",  "COUGOUAR",  "ARLANDES",  "GIRODYNE",  "SOULAUDE",  "HUMIDITE",  "SEXRATIO",  "SINUSAUX",  "ACTIONNE",  "DEVERSER",  "AMENSAUX",  "ETARQUER",  "DECOCHER",  "SOUCIEUX",  "SURFAIRE",  "ANDERSON",  "CHIOURME",  "PALLEALE",  "ROSSOLIS",  "TRICARDE",  "BIARROTE",  "SCABIEUX",  "POSTURAL",  "TREIGNAC",  "HISTOIRE",  "ALICANTE",  "RECUSANT",  "VEXATION",  "LARGESSE",  "INALPAGE",  "PARTANCE",  "HABITUEE",  "BONICHON",  "LEVRONNE",  "ENTABLER",  "CYCLISME",  "SAPONITE",  "CAFETIER",  "LUTHISTE",  "CHAFOUIN",  "IMAGINAL",  "QUEUTANT",  "MORGUANT",  "REVOYANT",  "RELACHEE",  "LARGUEUR"};

static char * F9[] = { "SOCIALITE",  "LEVANTINE",  "INFECTANT",  "OFFICINAL",  "FACTIEUSE",  "PARECHOCS",  "DERMATITE",  "DEJANTANT",  "HAMBURGER",  "INCURABLE",  "HELLENISE",  "DECOMBRES",  "BRANLANTE",  "LIMOGEANT",  "RECEPISSE",  "BRISEMENT",  "DAMOISEAU",  "ENCROUTEE",  "DEGUEULER",  "RESERVOIR",  "TRAINEUSE",  "FANSCLUBS",  "ACQUERANT",  "BOYCOTTER",  "MANIFESTE",  "HEXACORDE",  "HIVERNANT",  "GESTICULE",  "CHANTOUNG",  "FERRYBOAT",  "ETIQUETER",  "ARGOTISME",  "EMULSIFIE",  "CROQUETTE",  "PREVOYANT",  "BARHILLEL",  "SYNGNATHE",  "PEGMATITE",  "CABALISTE",  "RETRACTER",  "JUDAICITE",  "HIVERNALE",  "ENDEMISME",  "HAVISSANT",  "DECOLORER",  "YACHTSMEN",  "EURYTHMIE",  "OBSCURITE",  "TABLETIER",  "OUTILLANT",  "VASTEMENT",  "PACKAGEUR",  "COLLODION",  "IONIENNES",  "RENIFORME",  "LARYNGITE",  "PRESEANCE",  "SATELLISE",  "ACTIVISTE",  "RABAISSER",  "EMPIRISME",  "COURTSJUS",  "ECHAUDAGE",  "ISOLATEUR",  "ARCHIVANT",  "EVISCERER",  "LAPINIERE",  "CASSEPIPE",  "DEPEINDRE",  "DEPENDANT",  "COUCHERIE",  "LIVRAISON",  "CONCAVITE",  "DILATANTE",  "BENINCITY",  "HISTAMINE",  "DECILITRE",  "TOURNEUSE",  "ANNONCANT",  "ESCROQUER",  "REQUERANT",  "CAMBUSIER",  "RATTACHER",  "VERIFIEUR",  "MANGANITE",  "SESAMOIDE",  "FACTICITE",  "BAILLONNE",  "BIDONNAGE",  "CLAMECANT",  "PERINEALE",  "PROPRIETE",  "ECLIPSANT",  "ARTHRODIE",  "CAILLASSE",  "ARDENNAIS",  "LEVRETTEE",  "CEDRATIER",  "MYELINISE",  "OREILLARD"};

static char * F10[] = { "HERBORISER",  "CHOLEDOQUE",  "SUSPENDANT",  "CLAPISSANT",  "SYNCYTIALE",  "SUCCINIQUE",  "DIFFUSEUSE",  "OBTURATEUR",  "FINIGUERRA",  "FLOCONNANT",  "SUPPOSABLE",  "PICAILLONS",  "MACADAMISE",  "BADIGEONNE",  "MACHINISTE",  "OISELLERIE",  "PAPILLOTER",  "MICROCLINE",  "ELANCEMENT",  "DERAILLEUR",  "ADULTERINE",  "PORTEMINES",  "CANONICITE",  "NEWYORKAIS",  "EMPEGUIONS",  "ARRANGEANT",  "OBLITERANT",  "SAISISSANT",  "BOULEDOGUE",  "DISJOINDRE",  "DOMINICALE",  "INGURGITER",  "BHADRAVATI",  "OUTRAGEUSE",  "RESTITUANT",  "PREFERABLE",  "DESENCLAVE",  "CAMBODGIEN",  "COMMENCANT",  "MARECHALAT",  "PREFECTURE",  "CREOLISANT",  "SUBTERFUGE",  "INDENIABLE",  "DEMUTISANT",  "INNOMMABLE",  "VIEILLESSE",  "NUMEROTAGE",  "DENEGATION",  "DIABLEMENT",  "DEPOTVENTE",  "RANDONNANT",  "ASPHYXIANT",  "STABILISER",  "DECLIQUETE",  "BOULOCHANT",  "BICYCLETTE",  "STIPULANTE",  "STUPEFIANT",  "PYRENEENNE",  "SATYRIASIS",  "MIGNARDISE",  "RECRUTEUSE",  "BROUILLARD",  "CLIGNEMENT",  "COURTISANT",  "DISSUADANT",  "REEDUQUANT",  "ANTENATALE",  "BALLOTTANT",  "ARYTENOIDE",  "PREDICABLE",  "REFOUILLER",  "EMERVEILLE",  "PERINATALE",  "BARNEVILLE",  "PROVISORAT",  "LISIBILITE",  "CASSOLETTE",  "PASSIONNEE",  "ASTROLOGUE",  "MEMORIELLE",  "PENSIONNEE",  "COEXTENSIF",  "COMPRESSER",  "TAIKONAUTE",  "ENCENSEUSE",  "LIBIDINAUX",  "PHILOLOGUE",  "EPINEURIEN",  "CAVALCANTI",  "PAUPERISER",  "MONOPHONIE",  "CHARPENTEE",  "CYRILLIQUE",  "CATHEDRAUX",  "COUVREPLAT",  "DEMOBILISE",  "DESERTIFIE",  "PREPENSION"};

static char * F20[] = { "MAQUIGNONNE",  "SPATIONAUTE",  "REVEILLONNER",  "NEOIMPRESSIONNISME",  "MUSICOGRAPHE",  "COAGULATION",  "FONDAMENTAUX",  "SOUSDIACONAT",  "DEPHOSPHORE",  "INDISCUTABLE",  "PROSCRIPTION",  "TAICHICHUAN",  "BLANCHISSEMENT",  "HYSTEROSALPINGOGRAPHIE",  "INTERSESSION",  "GAUCHISANTE",  "ARRANGEMENT",  "WATERCLOSET",  "ARTHEZDEBEARN",  "ENTREPRENEURIAL",  "MONTMORENCY",  "SOUSJACENTS",  "TESTIMONIAUX",  "RAISONNABLEMENT",  "CIRCONSTANCIEE",  "BRILLANTEUR",  "CHAUFFEPLAT",  "AFFECTIONNEE",  "LITHOTYPOGRAPHIE",  "DEVELOPPANTE",  "EXCOMMUNIEE",  "ANAGLYPTIQUE",  "GLYCERINANT",  "PASSINGSHOT",  "DESAGREGATION",  "FRANCSALLEUX",  "INDISTINCTE",  "TELETRANSMISSION",  "CARBONISAGE",  "BELLIGERANT",  "OPERACOMIQUE",  "CUMULODOMES",  "SERPENTIFORME",  "CARRENODEMIRANDA",  "REFRIGERANT",  "PROTOZOAIRE",  "REPIPASSENT",  "EUROPEOCENTRISME",  "BELLIQUEUSE",  "DEPLACEMENT",  "PHENOBARBITAL",  "POINCONNEUSE",  "GENERALEMENT",  "TROUILLARDE",  "COMPATISSANT",  "ADMINISTRER",  "TELEREALITE",  "LIEUTENANTGOUVERNEUR",  "MONOCATENAIRE",  "CORNELIENNE",  "TETANISATION",  "TOXICOLOGUE",  "INTELLIGENTE",  "TRANSFORMABLE",  "BESSANCOURT",  "QUESTIONNAIRE",  "NONACCOMPLIE",  "TRANSPOSITEUR",  "CHARLATANESQUE",  "RETICULOENDOTHELIAL",  "CALESETALONS",  "DEQUALIFICATION",  "AGUASCALIENTES",  "SOLILOQUANT",  "CONSTANTINIEN",  "CONGEDIEMENT",  "DECOLONISATION",  "ANURADHAPURA",  "BARAQUEVILLE",  "FACTIONNAIRE",  "PRATIQUEMENT",  "DECIMALISER",  "ENDOCRINOLOGUE",  "ISOLATIONNISTE",  "DESORGANISATEUR",  "ADMINISTRATIVEMENT",  "ENDOTHELIAL",  "THEOLOGIQUEMENT",  "SOCIOCRITIQUE",  "ASSERVISSANTE",  "PROCLAMATION",  "SPATIABILISER",  "ROBOTICIENNES",  "CONTREBALANCER",  "BIOTHERAPIE",  "ARBITRALEMENT",  "SAINTEBARBE",  "SUBCONSCIENT",  "GYMNASTIQUE",  "CAPORALISER"};




/* Constructeur*/
Pendu_jeux::Pendu_jeux(){};


/* recommencer*/
void Pendu_jeux::recommencer(){
    char choix1;
    cout <<"voulez-vous recommencer ?(o/n)" <<endl;
    fgets(&choix1, 2, stdin);
    printf("%c\n", choix1);
    switch(choix1){
        case 'o':
        case 'O':
            pendu();
            break;
        case 'n':
            cout << "Au revoir à bientôt" <<endl;
            exit(0);
            break;
        default:
            recommencer();
            
    }
}


/* le pendu*/
void Pendu_jeux::pendu(){
    srand(time(NULL));
    char choix[3] ;
    int i;
     
    cout <<"Combien de lettres qui soit superieur et égale à 3 vous voulez pour votre mot: "<<endl;
    
    fgets(choix, 3, stdin);
    
    /* transformation en int*/
    int n = atoi(choix);
    
    
    /* Les valeurs impossibles */
    if ((n == 1) || (n == 2) || (n == 0)){
        pendu();
    }
    
    /* on prend un indice aléatoire  entre 0 et 99 */
    i = rand()%100;
    
    Pendu *p1;
    /* Chaque nombre est associé à une liste*/
    switch (n){
        
        case 3:
            p1= new Pendu(F3[i]);
            p1->cherche_mot(10);
            break;
        case 4:
            p1= new Pendu(F4[i]);
            p1->cherche_mot(10);
            break;
        case 5:
            p1= new Pendu(F5[i]);
            p1->cherche_mot(10);
            break;
        case 6:
            
            p1= new Pendu(F6[i]);
            p1->cherche_mot(10);
            break;
        case 7:
            p1= new Pendu(F7[i]);
            p1->cherche_mot(10);
            break;
        case 8:
            p1= new Pendu(F8[i]);
            p1->cherche_mot(10);
            break;
        case 9:
            p1= new Pendu(F9[i]);
            p1->cherche_mot(10);
            break;
        case 10:
            p1= new Pendu(F10[i]);
            p1->cherche_mot(10);
            break;
        default:
            p1= new Pendu(F20[i]);
            p1->cherche_mot(10);
            
    }
    
    /* Propose si on veut recommencer*/
    recommencer();
    
    
    
    
        
    
    
    
}




