/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface _CDSpotlightItemRecorderOperation : NSObject {

	NSArray* _items;
	NSString* _bundleID;
	long long _type;

}

@property (nonatomic,retain) NSArray * items;                  //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)operationByCombiningOperation:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
@end

