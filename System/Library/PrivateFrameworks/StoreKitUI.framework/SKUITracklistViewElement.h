/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSMutableArray, SKUIHeaderViewElement, NSArray;

@interface SKUITracklistViewElement : SKUIViewElement {

	NSMutableArray* _sections;
	NSMutableArray* _tracks;

}

@property (nonatomic,readonly) SKUIHeaderViewElement * header; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * tracks; 
-(NSArray *)sections;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(void)enumerateTracksUsingBlock:(/*^block*/id)arg1 ;
-(SKUIHeaderViewElement *)header;
-(NSArray *)tracks;
@end

