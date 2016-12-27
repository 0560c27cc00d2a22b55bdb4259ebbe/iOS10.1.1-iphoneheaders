/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TKSmartCardPINFormat : NSObject <NSSecureCoding, NSCopying> {

	long long _charset;
	long long _encoding;
	long long _minPINLength;
	long long _maxPINLength;
	long long _PINBlockByteLength;
	long long _PINJustification;
	long long _PINBitOffset;
	long long _PINLengthBitOffset;
	long long _PINLengthBitSize;

}

@property (assign) long long charset;                         //@synthesize charset=_charset - In the implementation block
@property (assign) long long encoding;                        //@synthesize encoding=_encoding - In the implementation block
@property (assign) long long minPINLength;                    //@synthesize minPINLength=_minPINLength - In the implementation block
@property (assign) long long maxPINLength;                    //@synthesize maxPINLength=_maxPINLength - In the implementation block
@property (assign) long long PINBlockByteLength;              //@synthesize PINBlockByteLength=_PINBlockByteLength - In the implementation block
@property (assign) long long PINJustification;                //@synthesize PINJustification=_PINJustification - In the implementation block
@property (assign) long long PINBitOffset;                    //@synthesize PINBitOffset=_PINBitOffset - In the implementation block
@property (assign) long long PINLengthBitOffset;              //@synthesize PINLengthBitOffset=_PINLengthBitOffset - In the implementation block
@property (assign) long long PINLengthBitSize;                //@synthesize PINLengthBitSize=_PINLengthBitSize - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)_writeNumber:(unsigned long long)arg1 into:(id)arg2 bitOffset:(long long)arg3 bitLength:(long long)arg4 ;
-(long long)charset;
-(void)setCharset:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMinPINLength:(long long)arg1 ;
-(void)setMaxPINLength:(long long)arg1 ;
-(long long)maxPINLength;
-(long long)minPINLength;
-(long long)PINBlockByteLength;
-(void)setPINBlockByteLength:(long long)arg1 ;
-(long long)PINJustification;
-(void)setPINJustification:(long long)arg1 ;
-(long long)PINBitOffset;
-(void)setPINBitOffset:(long long)arg1 ;
-(long long)PINLengthBitOffset;
-(void)setPINLengthBitOffset:(long long)arg1 ;
-(long long)PINLengthBitSize;
-(void)setPINLengthBitSize:(long long)arg1 ;
-(BOOL)fillPIN:(id)arg1 intoAPDUTemplate:(id)arg2 PINByteOffset:(long long)arg3 error:(id*)arg4 ;
-(void)setEncoding:(long long)arg1 ;
-(long long)encoding;
@end
