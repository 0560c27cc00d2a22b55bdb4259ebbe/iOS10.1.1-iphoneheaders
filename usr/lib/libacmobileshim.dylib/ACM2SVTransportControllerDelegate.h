/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACM2SVTransportControllerDelegate <NSObject>
@optional
-(void)twoSVTransportController:(id)arg1 fetchImageWithHandler:(id)arg2 completion:(/*^block*/id)arg3;
-(void)twoSVTransportControllerCancelFetchingImages:(id)arg1;

@required
-(void)twoSVTransportController:(id)arg1 scheduleHandler:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

