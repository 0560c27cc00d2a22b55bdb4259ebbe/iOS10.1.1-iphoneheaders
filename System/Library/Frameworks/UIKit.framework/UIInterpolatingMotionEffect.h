/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIMotionEffect.h>

@class NSString;

@interface UIInterpolatingMotionEffect : UIMotionEffect {

	double _horizontalAccelerationBoostFactor;
	double _verticalAccelerationBoostFactor;
	NSString* _keyPath;
	long long _type;
	id _minimumRelativeValue;
	id _maximumRelativeValue;

}

@property (nonatomic,readonly) NSString * keyPath;                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id minimumRelativeValue;              //@synthesize minimumRelativeValue=_minimumRelativeValue - In the implementation block
@property (nonatomic,retain) id maximumRelativeValue;              //@synthesize maximumRelativeValue=_maximumRelativeValue - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyPath;
-(void)setMinimumRelativeValue:(id)arg1 ;
-(void)setMaximumRelativeValue:(id)arg1 ;
-(id)initWithKeyPath:(id)arg1 type:(long long)arg2 ;
-(void)_setType:(long long)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)_setHorizontalAccelerationBoostFactor:(double)arg1 ;
-(double)_horizontalAccelerationBoostFactor;
-(void)_setVerticalAccelerationBoostFactor:(double)arg1 ;
-(double)_verticalAccelerationBoostFactor;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(void)_setKeyPath:(id)arg1 ;
-(id)minimumRelativeValue;
-(id)maximumRelativeValue;
@end

