/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface NMSObfuscatableDescription : NSObject {

	NSString* _prefixString;
	NSMutableArray* _items;

}

@property (nonatomic,retain) NSMutableArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * prefixString;              //@synthesize prefixString=_prefixString - In the implementation block
-(id)init;
-(id)description;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)CPSafeDescription;
-(id)_descriptionObfuscated:(BOOL)arg1 ;
-(void)addDescriptionFormat:(id)arg1 value:(id)arg2 ;
-(void)addObfuscatedDescriptionFormat:(id)arg1 value:(id)arg2 ;
-(NSString *)prefixString;
-(void)setPrefixString:(NSString *)arg1 ;
@end

