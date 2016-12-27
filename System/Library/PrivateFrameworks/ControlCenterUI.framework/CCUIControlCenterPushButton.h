/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUIKit/CCUIControlCenterButton.h>

@class NSString, NSNumber;

@interface CCUIControlCenterPushButton : CCUIControlCenterButton {

	NSString* _identifier;
	NSNumber* _sortKey;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSNumber * sortKey;                 //@synthesize sortKey=_sortKey - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSNumber *)sortKey;
-(void)setSortKey:(NSNumber *)arg1 ;
@end

