/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@class SSDownloadMetadata, SSPurchaseResponse;

@interface SSImportDownloadToIPodLibraryRequest : SSRequest {

	SSDownloadMetadata* _downloadMetadata;
	SSPurchaseResponse* _purchaseResponse;

}

@property (nonatomic,readonly) SSDownloadMetadata * downloadMetadata;              //@synthesize downloadMetadata=_downloadMetadata - In the implementation block
@property (nonatomic,readonly) SSPurchaseResponse * purchaseResponse;              //@synthesize purchaseResponse=_purchaseResponse - In the implementation block
-(SSDownloadMetadata *)downloadMetadata;
-(SSPurchaseResponse *)purchaseResponse;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)initWithPurchase:(id)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithDownloadMetadata:(id)arg1 ;
@end

