/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPRandomizedBit : NSObject {

	unsigned long long _index;
	long long _value;

}

@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long value;                       //@synthesize value=_value - In the implementation block
+(id)randomizedBit:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(long long)value;
-(unsigned long long)index;
-(id)initBit:(long long)arg1 atIndex:(unsigned long long)arg2 ;
@end

