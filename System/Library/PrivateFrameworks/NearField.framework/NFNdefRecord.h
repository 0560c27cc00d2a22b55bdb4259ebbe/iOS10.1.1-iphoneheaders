/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NearField-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NFNdefRecord : NSObject <NSSecureCoding> {

	unsigned char _firstOctet;
	NSData* _identifier;
	NSData* _type;
	NSData* _payload;

}

@property (assign,nonatomic) BOOL messageBegin; 
@property (assign,nonatomic) BOOL messageEnd; 
@property (assign,nonatomic) BOOL shortRecord; 
@property (assign,nonatomic) BOOL chunked; 
@property (assign,nonatomic) unsigned char typeNameFormat; 
@property (nonatomic,retain) NSData * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,retain) NSData * identifier; 
+(BOOL)supportsSecureCoding;
+(id)recordsFromBytes:(const void*)arg1 length:(unsigned)arg2 ;
+(id)_decodeTextRecord:(id)arg1 ;
+(id)_decodeURIRecord:(id)arg1 ;
+(id)emptyRecord;
+(id)recordWithText:(id)arg1 lang:(id)arg2 ;
+(id)recordWithURI:(id)arg1 ;
+(id)recordWithTelephone:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSData *)identifier;
-(NSData *)payload;
-(void)setType:(NSData *)arg1 ;
-(NSData *)type;
-(void)setIdentifier:(NSData *)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)setPayload:(NSData *)arg1 ;
-(id)asData;
-(id)decode;
-(void)_parse:(NFDataScanner*)arg1 ;
-(void)setMessageBegin:(BOOL)arg1 ;
-(void)setMessageEnd:(BOOL)arg1 ;
-(void)setTypeNameFormat:(unsigned char)arg1 ;
-(void)setShortRecord:(BOOL)arg1 ;
-(void)setChunked:(BOOL)arg1 ;
-(BOOL)shortRecord;
-(void)_setIdLengthPresent:(BOOL)arg1 ;
-(BOOL)_idLengthPresent;
-(BOOL)messageBegin;
-(BOOL)messageEnd;
-(BOOL)chunked;
-(unsigned char)typeNameFormat;
@end

