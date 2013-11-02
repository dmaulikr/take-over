//
//  EnemyAI.h
//  blockwar
//
//  Created by Darren Tsung on 10/31/13.
//
//

#import <Foundation/Foundation.h>

@interface EnemyAI : NSObject
{
    @private
    NSMutableArray *army;
    ccColor4F color;
    int waveSize;
}

-(id) initWithReferenceToEnemyArray:(NSMutableArray *) armyArray;
-(void) spawnWave;

@end
