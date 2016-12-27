/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSPDocumentRevision : NSObject <NSCopying> {

	int _sequence;
	NSString* _identifier;

}

@property (nonatomic,readonly) int sequence;                           //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * revisionString; 
+(id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id*)arg3 ;
+(id)revisionWithSequence:(int)arg1 identifier:(id)arg2 ;
+(id)revisionWithRevisionString:(id)arg1 ;
-(id)initWithSequence:(int)arg1 identifier:(id)arg2 ;
-(id)nextRevisionWithIdentifier:(id)arg1 ;
-(id)initWithRevisionString:(id)arg1 ;
-(NSString *)revisionString;
-(long long)compareSequenceFromRevision:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sequence;
@end

