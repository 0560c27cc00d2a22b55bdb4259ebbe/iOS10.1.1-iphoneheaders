/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SearchEngineInfo;

@interface SearchQueryBuilder : NSObject {

	NSString* queryString;
	SearchEngineInfo* engineInfo;

}
+(id)searchQueryBuilderWithXWebSearchURL:(id)arg1 ;
+(id)searchQueryBuilderWithQuery:(id)arg1 ;
-(id)searchEngineInfo;
-(BOOL)searchEngineIsDefault;
-(id)initWithSearchEngineInfo:(id)arg1 queryString:(id)arg2 ;
-(id)initWithXWebSearchURL:(id)arg1 ;
-(id)queryString;
-(id)initWithQueryString:(id)arg1 ;
-(id)searchURL;
@end

