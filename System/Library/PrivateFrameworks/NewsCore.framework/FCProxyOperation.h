/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCOperation;

@interface FCProxyOperation : FCOperation {

	FCOperation* _underlyingOperation;

}

@property (nonatomic,retain) FCOperation * underlyingOperation;              //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
+(void)initialize;
+(id)proxyForOperation:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setUnderlyingOperation:(FCOperation *)arg1 ;
-(FCOperation *)underlyingOperation;
-(void)setRelativePriority:(long long)arg1 ;
-(void)performOperation;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)_revisitRelativePriority;
-(void)_revisitQualityOfService;
-(unsigned long long)propertiesInheritedByChildOperations;
@end

