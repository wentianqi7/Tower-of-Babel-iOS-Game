//
//  Unit.h
//  GameOfLife
//
//  Created by Rainy Yang on 4/15/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Unit : CCSprite {
	int health;
}

- (void)reduceHealth;
- (bool)isDead;
@end
