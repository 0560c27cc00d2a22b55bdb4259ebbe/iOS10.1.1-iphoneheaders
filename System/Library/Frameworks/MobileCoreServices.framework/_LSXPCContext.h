/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSQueryContext.h>
#import <libobjc.A.dylib/_LSQueryResolving.h>

@class _LSQueryCache, _LSLocalContext;

@interface _LSXPCContext : _LSQueryContext <_LSQueryResolving> {

	_LSQueryCache* _queryCache;
	_LSLocalContext* _localContext;

}
-(id)_queryCache;
-(void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_resolveQueries:(id)arg1 synchronously:(BOOL)arg2 XPCConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)resolveWhatWeCanLocallyWithQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)_init;
@end

