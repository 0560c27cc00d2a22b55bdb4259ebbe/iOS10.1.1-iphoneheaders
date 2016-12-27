/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SKUIReviewMetadata;

@interface SKUIPostReviewOperation : ISOperation {

	NSDictionary* _responseDictionary;
	SKUIReviewMetadata* _review;

}

@property (readonly) NSDictionary * responseDictionary; 
-(void)run;
-(id)initWithReviewMetadata:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(id)_httpBody;
@end

