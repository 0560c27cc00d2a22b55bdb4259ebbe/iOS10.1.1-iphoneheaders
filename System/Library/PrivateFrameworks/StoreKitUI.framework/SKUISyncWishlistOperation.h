/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject;

@interface SKUISyncWishlistOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock; 
-(id)init;
-(void)main;
-(id)initWithClientContext:(id)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(void)_sendLocalChangesForWishlist:(id)arg1 ;
-(BOOL)_loadRemoteItemsForWishlist:(id)arg1 didChange:(BOOL*)arg2 error:(id*)arg3 ;
-(id)resultBlock;
-(BOOL)_mergeItems:(id)arg1 wishlist:(id)arg2 didChange:(BOOL*)arg3 error:(id*)arg4 ;
@end

