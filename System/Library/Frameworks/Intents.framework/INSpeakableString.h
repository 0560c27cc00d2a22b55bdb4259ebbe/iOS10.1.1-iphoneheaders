/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INSpeakableStringExport.h>
#import <libobjc.A.dylib/INSpeakable.h>

@class NSString;

@interface INSpeakableString : NSObject <INSpeakableStringExport, INSpeakable> {

	NSString* _spokenPhrase;
	NSString* _pronunciationHint;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * spokenPhrase;                   //@synthesize spokenPhrase=_spokenPhrase - In the implementation block
@property (nonatomic,readonly) NSString * pronunciationHint;              //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)length;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_effectiveNSStringValue;
-(id)initWithIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 ;
-(NSString *)spokenPhrase;
-(NSString *)pronunciationHint;
@end

