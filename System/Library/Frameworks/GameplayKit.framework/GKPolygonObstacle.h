/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKObstacle.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface GKPolygonObstacle : GKObstacle <NSCoding> {

	GKCPolygonObstacle* _cPolygonObstacle;

}

@property (nonatomic,readonly) unsigned long long vertexCount; 
+(id)obstacleWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(2)vertexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)vertexCount;
-(GKCPolygonObstacle*)cPolygonObstacle;
-(Obstacle*)obstacle;
-(void)setCPolygonObstacle:(GKCPolygonObstacle*)arg1 ;
-(id)initWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
@end

