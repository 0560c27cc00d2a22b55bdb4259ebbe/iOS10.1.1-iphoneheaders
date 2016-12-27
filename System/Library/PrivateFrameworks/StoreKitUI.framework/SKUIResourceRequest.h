/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIResourceRequest : NSObject <NSCopying> {

	id _cacheKey;
	unsigned long long _requestID;

}

@property (nonatomic,readonly) BOOL cachesInMemory; 
@property (nonatomic,retain) id cacheKey;                                       //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) unsigned long long requestIdentifier;              //@synthesize requestID=_requestID - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cacheKey;
-(void)setCacheKey:(id)arg1 ;
-(unsigned long long)requestIdentifier;
-(BOOL)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(id)_initSKUIResourceRequest;
-(void)setRequestIdentifier:(unsigned long long)arg1 ;
@end

