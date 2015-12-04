package game;

import display.XMLParser;

public class FileIO {
	private Game game;
	private int saveDelay = 0;

	public static final String PLAYER_INIT_INFO = "./res/player.txt";

	public static final String MAP1_MAP = "./res/maps/map1.txt";
	public static final String MAP2_MAP = "./res/maps/map2.txt";
	public static final String MAP3_MAP = "./res/maps/map3.txt";
	public static final String BOSS_MAP = "./res/maps/mapboss.txt";
	public static final String MAP1_ELEMENTS = "./res/maps/map1.xml";
	public static final String MAP2_ELEMENTS = "./res/maps/map2.xml";
	public static final String MAP3_ELEMENTS = "./res/maps/map3.xml";
	public static final String BOSS_MAP_ELEMENTS = "./res/maps/mapboss.xml";
	
	public static final String SAVE1 = "./res/saves/1.xml";
	public static final String SAVE2 = "./res/saves/2.xml";
	public static final String SAVE3 = "./res/saves/3.xml";

	public FileIO(Game game){ this.game = game; }
	
	public String getMapStr(int i){
		switch(i){
		case 1: return MAP1_MAP;
		case 2: return MAP2_MAP;
		case 3: return MAP3_MAP;
		case 4: return BOSS_MAP;
		default: return MAP1_MAP;	
		}
	}
	
	public void loadLevel(int i){
		switch(i){
		case 1:
			System.out.println("LEVEL 1");
			game.output.setMap(MAP1_MAP);
			XMLParser.loadFromXML(this.game, MAP1_ELEMENTS);
			break;
		case 2:
			System.out.println("LEVEL 2");
			game.output.setMap(MAP2_MAP);
			XMLParser.loadFromXML(this.game, MAP2_ELEMENTS);
			break;
		case 3:
			game.output.setMap(MAP3_MAP);
			XMLParser.loadFromXML(this.game, MAP3_ELEMENTS);
			break;
		case 4: //boss
			game.output.setMap(MAP1_MAP);
			XMLParser.loadFromXML(this.game, MAP1_ELEMENTS);
			break;
		}
	}
	
	public void tick(){
		if(saveDelay > 0) { saveDelay--; }
		else {
			if(game.getKeyManager().to1){ 
				XMLParser.saveToXML(this.game, this.SAVE1); 
				saveDelay += 30;
				if(saveDelay>30) { saveDelay = 30; };
			}
			if(game.getKeyManager().to2){ 
				XMLParser.saveToXML(this.game, this.SAVE2); 
				saveDelay += 30;
				if(saveDelay>30) { saveDelay = 30; };
			}
			if(game.getKeyManager().to3){ 
				XMLParser.saveToXML(this.game, this.SAVE3); 
				saveDelay += 30;
				if(saveDelay>30) { saveDelay = 30; };
			}

			if(game.getKeyManager().from1){ 
				XMLParser.loadFromXML(this.game, this.SAVE1); 
				saveDelay += 30;
				if(saveDelay>30) { saveDelay = 30; };
			}
			if(game.getKeyManager().from2){ 
				XMLParser.loadFromXML(this.game, this.SAVE2); 
				saveDelay += 30;
				if(saveDelay>30) { saveDelay = 30; };
			}
			if(game.getKeyManager().from3){ 
				XMLParser.loadFromXML(this.game, this.SAVE3); 
				saveDelay += 30;
				if(saveDelay>30) { saveDelay = 30; };
			}	
		}
		// Check for calls to load or save a game

	}

}
