/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSMutableDictionary;

@interface SubscriberTransactionElement : NSObject {

	int _type;
	NSMutableDictionary* _info;

}

@property (nonatomic,retain) NSMutableDictionary * info;              //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
-(BOOL)matchContent:(id)arg1 ;
-(id)initWithAction:(id)arg1 andIdentifier:(int)arg2 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)action;
-(void)setIdentifier:(int)arg1 ;
-(void)setAction:(id)arg1 ;
-(NSMutableDictionary *)info;
-(void)setPayload:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
@end

