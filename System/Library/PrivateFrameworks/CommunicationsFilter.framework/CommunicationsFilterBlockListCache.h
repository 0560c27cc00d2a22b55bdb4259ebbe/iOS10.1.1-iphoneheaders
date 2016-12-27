/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {

	NSMutableArray* _recentItems;
	int _notifyEmptyListToken;
	BOOL _listIsEmpty;

}
-(id)init;
-(void)_blockListChanged:(id)arg1 ;
-(void)syncListEmptyState;
-(long long)cachedResponseForItem:(id)arg1 ;
-(void)removeItemFromCache:(id)arg1 ;
-(void)setResponse:(BOOL)arg1 forItem:(id)arg2 ;
@end

