/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardLayout.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIHardwareKeyboardLayout : TIKeyboardLayout <NSSecureCoding> {

	long long _keyboardType;

}

@property (nonatomic,readonly) long long keyboardType;              //@synthesize keyboardType=_keyboardType - In the implementation block
+(void)flushLayoutCaches;
+(BOOL)supportsSecureCoding;
-(id)initWithKeyboardType:(long long)arg1 ;
-(void)addString:(id)arg1 forKeyCode:(unsigned long long)arg2 ;
-(CGRect)_frameForKeyCode:(unsigned long long)arg1 ;
-(id)_ANSIFrames;
-(id)_ISOFrames;
-(id)_JISFrames;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)keyboardType;
@end

