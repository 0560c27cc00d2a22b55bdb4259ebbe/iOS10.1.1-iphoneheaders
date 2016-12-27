/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HUControlPanelRule.h>

@class NSString;

@interface HUControlPanelFilterRule : NSObject <HUControlPanelRule> {

	double _priority;
	/*^block*/id _filter;

}

@property (nonatomic,copy) id filter;                               //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double priority;                       //@synthesize priority=_priority - In the implementation block
+(id)ruleWithFilter:(/*^block*/id)arg1 ;
-(void)setFilter:(id)arg1 ;
-(double)priority;
-(void)setPriority:(double)arg1 ;
-(id)filter;
-(id)initWithFilter:(/*^block*/id)arg1 ;
-(BOOL)ruleMatchesItem:(id)arg1 ;
@end

