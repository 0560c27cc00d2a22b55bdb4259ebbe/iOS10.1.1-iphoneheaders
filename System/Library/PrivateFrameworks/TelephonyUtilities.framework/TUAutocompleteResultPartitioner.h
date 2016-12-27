/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUSearchController, NSMutableArray;

@interface TUAutocompleteResultPartitioner : NSObject {

	TUSearchController* _searchController;
	NSMutableArray* _normalResultsArray;
	NSMutableArray* _foundInMailResultsArray;
	NSMutableArray* _foundOnServersResultsArray;

}

@property (nonatomic,retain) NSMutableArray * normalResultsArray;                      //@synthesize normalResultsArray=_normalResultsArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * foundInMailResultsArray;                 //@synthesize foundInMailResultsArray=_foundInMailResultsArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * foundOnServersResultsArray;              //@synthesize foundOnServersResultsArray=_foundOnServersResultsArray - In the implementation block
@property (__weak) TUSearchController * searchController;                              //@synthesize searchController=_searchController - In the implementation block
+(BOOL)sourceTypeIsFoundInMail:(unsigned long long)arg1 ;
+(BOOL)sourceTypeIsFoundOnServers:(unsigned long long)arg1 ;
-(id)init;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(NSMutableArray *)foundInMailResultsArray;
-(NSMutableArray *)foundOnServersResultsArray;
-(NSMutableArray *)normalResultsArray;
-(void)setNormalResultsArray:(NSMutableArray *)arg1 ;
-(void)setFoundInMailResultsArray:(NSMutableArray *)arg1 ;
-(void)setFoundOnServersResultsArray:(NSMutableArray *)arg1 ;
-(void)addResult:(id)arg1 ;
-(id)searchResults;
@end

