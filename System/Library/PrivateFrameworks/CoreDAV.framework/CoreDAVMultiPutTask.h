/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSString, CoreDAVXMLData, NSMutableDictionary, NSDictionary;

@interface CoreDAVMultiPutTask : CoreDAVTask {

	NSString* _appSpecificNamespace;
	NSString* _appSpecificDataProp;
	NSString* _checkCTag;
	CoreDAVXMLData* _pushedData;
	BOOL _validCTag;
	NSString* _nextCTag;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
	NSMutableDictionary* _uuidToErrorItems;
	NSMutableDictionary* _hrefToErrorItems;
	NSMutableDictionary* _uuidToStatus;
	NSMutableDictionary* _hrefToStatus;

}

@property (nonatomic,readonly) NSString * nextCTag;                          //@synthesize nextCTag=_nextCTag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToHREF;                    //@synthesize uuidToHREF=_uuidToHREF - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToETag;                    //@synthesize hrefToETag=_hrefToETag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToStatus;                  //@synthesize uuidToStatus=_uuidToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToStatus;                  //@synthesize hrefToStatus=_hrefToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToErrorItems;              //@synthesize uuidToErrorItems=_uuidToErrorItems - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToErrorItems;              //@synthesize hrefToErrorItems=_hrefToErrorItems - In the implementation block
-(void)dealloc;
-(NSDictionary *)uuidToErrorItems;
-(NSDictionary *)hrefToErrorItems;
-(NSDictionary *)uuidToStatus;
-(NSDictionary *)hrefToStatus;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 ;
-(void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2 ;
-(NSDictionary *)uuidToHREF;
-(NSDictionary *)hrefToETag;
-(NSString *)nextCTag;
-(id)httpMethod;
-(id)additionalHeaderValues;
@end

