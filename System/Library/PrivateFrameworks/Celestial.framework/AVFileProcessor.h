/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVFileProcessor : NSObject {

	float _percentComplete;

}
+(id)fileProcessor;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 ;
-(id)sinfsFromFilePath:(id)arg1 ;
-(id)sinfInfoFromFilePath:(id)arg1 ;
-(id)rentalInfo:(id)arg1 ;
@end

