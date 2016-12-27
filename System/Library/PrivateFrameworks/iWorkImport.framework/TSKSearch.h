/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSKSearch : NSObject {

	BOOL _isComplete;
	NSString* _string;
	unsigned long long _options;
	/*^block*/id _hitBlock;

}

@property (nonatomic,copy) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id hitBlock;                               //@synthesize hitBlock=_hitBlock - In the implementation block
@property (assign,nonatomic) BOOL isComplete;                         //@synthesize isComplete=_isComplete - In the implementation block
-(void)setHitBlock:(id)arg1 ;
-(void)setIsComplete:(BOOL)arg1 ;
-(id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 ;
-(id)hitBlock;
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isComplete;
@end

