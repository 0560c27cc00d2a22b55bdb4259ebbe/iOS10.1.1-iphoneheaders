/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <MapsLockScreen/BannerItem.h>

@class NSArray, NSString, UIImage;

@interface NavManeuverBannerItem : BannerItem {

	int _maneuver;
	int _drivingSide;
	NSArray* _instructions;
	NSString* _distanceText;
	BOOL _withinManeuver;
	UIImage* _shieldImage;
	CGPoint _shieldCenterPoint;

}

@property (assign,nonatomic) int maneuver;                                             //@synthesize maneuver=_maneuver - In the implementation block
@property (assign,nonatomic) int drivingSide;                                          //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,copy) NSArray * instructions;                                     //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,copy) NSString * distanceText;                                    //@synthesize distanceText=_distanceText - In the implementation block
@property (assign,getter=isWithinManeuver,nonatomic) BOOL withinManeuver;              //@synthesize withinManeuver=_withinManeuver - In the implementation block
@property (nonatomic,copy) UIImage * shieldImage;                                      //@synthesize shieldImage=_shieldImage - In the implementation block
@property (assign,nonatomic) CGPoint shieldCenterPoint;                                //@synthesize shieldCenterPoint=_shieldCenterPoint - In the implementation block
-(CGPoint)shieldCenterPoint;
-(void)setWithinManeuver:(BOOL)arg1 ;
-(void)updateFromGuidanceChange:(id)arg1 ;
-(BOOL)isWithinManeuver;
-(void)setDistanceText:(NSString *)arg1 ;
-(BOOL)matchingGuidanceInfo:(id)arg1 ;
-(UIImage *)shieldImage;
-(void)setShieldImage:(UIImage *)arg1 ;
-(void)setShieldCenterPoint:(CGPoint)arg1 ;
-(NSString *)distanceText;
-(id)initWithManeuverType:(int)arg1 drivingSide:(int)arg2 instructions:(id)arg3 distanceText:(id)arg4 shieldImage:(id)arg5 shieldCenterAt:(CGPoint)arg6 withinManeuver:(BOOL)arg7 ;
-(id)description;
-(/*^block*/id)action;
-(unsigned long long)priority;
-(int)drivingSide;
-(void)setDrivingSide:(int)arg1 ;
-(NSArray *)instructions;
-(void)setInstructions:(NSArray *)arg1 ;
-(int)maneuver;
-(void)setManeuver:(int)arg1 ;
-(BOOL)isSticky;
-(BOOL)canShowInAssistant;
@end

