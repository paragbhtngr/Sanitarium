package entities;

import java.awt.Graphics;

public abstract class Entity {
	
	protected double x, y;
	
	public Entity(){
	}
	
	public Entity(double x, double y){
		this.x = x;
		this.y = y;
	}
	
	public abstract void tick();
	
	public double getX(){
		return this.x;
	}
	
	public double getY(){
		return this.y;
	}
	
	public void setX(double x){
		this.x = x;
	}
	
	public void setY(double y){
		this.y = y;
	}
}
