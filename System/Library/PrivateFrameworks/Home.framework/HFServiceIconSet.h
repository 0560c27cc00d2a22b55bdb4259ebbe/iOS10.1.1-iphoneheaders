/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFIconDescriptor;
@class NSSet;

@interface HFServiceIconSet : NSObject {

	NSSet* _allIcons;
	id<HFIconDescriptor> _defaultIcon;

}

@property (nonatomic,readonly) NSSet * allIcons;                              //@synthesize allIcons=_allIcons - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> defaultIcon;              //@synthesize defaultIcon=_defaultIcon - In the implementation block
+(id)setWithDefaultIcon:(id)arg1 ;
+(id)setWithDefaultIcon:(id)arg1 alternateIcons:(id)arg2 ;
+(id)placeholderIconSet;
+(id)setWithImageIdentifier:(id)arg1 ;
-(NSSet *)allIcons;
-(id<HFIconDescriptor>)defaultIcon;
@end

