/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {

	NSMutableArray* _recentSearchEntries;

}
+(BOOL)_shouldTrackSearches;
+(unsigned long long)_maximumNumberOfSearchesToTrack;
+(id)_defaultsKey;
-(void)_addRecentSearchEntry:(id)arg1 ;
-(void)_saveRecentSearches;
-(void)_loadRecentSearchesIfNeeded;
-(id)recentSearchesMatchingPrefix:(id)arg1 ;
-(void)_removeLegacyRecentSearchesData;
-(id)_recentSearchesDictionaries;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
-(void)_migrateLegacyData;
-(void)addRecentSearch:(id)arg1 ;
-(void)clearRecentSearchesAddedAfterDate:(id)arg1 ;
-(void)_addLegacySearch:(id)arg1 ;
-(id)recentSearches;
-(void)clearRecentSearches;
@end

