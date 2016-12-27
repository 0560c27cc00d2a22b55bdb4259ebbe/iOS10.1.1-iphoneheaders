/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebHistoryPrivate, NSArray;

@interface WebHistory : NSObject {

	WebHistoryPrivate* _historyPrivate;

}

@property (nonatomic,copy,readonly) NSArray * orderedLastVisitedDays; 
@property (assign,nonatomic) int historyItemLimit; 
@property (assign,nonatomic) int historyAgeInDaysLimit; 
+(void)_setVisitedLinkTrackingEnabled:(BOOL)arg1 ;
+(id)optionalSharedHistory;
+(void)setOptionalSharedHistory:(id)arg1 ;
+(void)_removeAllVisitedLinks;
-(void)_visitedURL:(id)arg1 withTitle:(id)arg2 method:(id)arg3 wasFailure:(BOOL)arg4 ;
-(id)_itemForURLString:(id)arg1 ;
-(void)_sendNotification:(id)arg1 entries:(id)arg2 ;
-(int)historyAgeInDaysLimit;
-(int)historyItemLimit;
-(NSArray *)orderedLastVisitedDays;
-(id)orderedItemsLastVisitedOnDay:(id)arg1 ;
-(void)setHistoryAgeInDaysLimit:(int)arg1 ;
-(void)setHistoryItemLimit:(int)arg1 ;
-(BOOL)saveToURL:(id)arg1 error:(id*)arg2 ;
-(void)timeZoneChanged:(id)arg1 ;
-(BOOL)loadFromURL:(id)arg1 error:(id*)arg2 ;
-(id)_data;
-(void)_addVisitedLinksToVisitedLinkStore:(WebVisitedLinkStore*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addItems:(id)arg1 ;
-(void)removeAllItems;
-(id)itemForURL:(id)arg1 ;
-(id)allItems;
-(BOOL)containsURL:(id)arg1 ;
-(void)removeItems:(id)arg1 ;
@end

