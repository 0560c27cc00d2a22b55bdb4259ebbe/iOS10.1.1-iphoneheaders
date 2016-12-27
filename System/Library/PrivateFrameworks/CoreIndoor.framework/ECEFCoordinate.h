/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ECEFCoordinate : NSObject {

	double _x;
	double _y;
	double _z;

}

@property (assign,x,nonatomic) double x;              //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;              //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) double z;              //@synthesize z=_z - In the implementation block
+(id)fromLatLon:(id)arg1 ;
-(id)init;
-(double)x;
-(void)setX:(double)arg1 ;
-(double)y;
-(void)setY:(double)arg1 ;
-(double)z;
-(void)setZ:(double)arg1 ;
-(id)initFromLatLon:(id)arg1 ;
-(id)initWithX:(double)arg1 y:(double)arg2 z:(double)arg3 ;
@end

