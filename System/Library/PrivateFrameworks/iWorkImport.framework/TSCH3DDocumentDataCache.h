/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSKDocumentRoot;

@interface TSCH3DDocumentDataCache : NSObject {

	TSKDocumentRoot* mDocumentRoot;

}
+(id)dataFromCache:(id)arg1 forFile:(id)arg2 group:(id)arg3 generateBlock:(/*^block*/id)arg4 ;
+(id)dataCacheWithDocumentRoot:(id)arg1 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)dataForFile:(id)arg1 group:(id)arg2 generateBlock:(/*^block*/id)arg3 ;
-(BOOL)debug_nukeDocumentCachePathForGroup:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

