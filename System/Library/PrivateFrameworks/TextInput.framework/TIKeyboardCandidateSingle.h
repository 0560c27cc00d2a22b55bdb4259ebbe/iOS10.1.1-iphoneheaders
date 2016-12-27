/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate {

	BOOL _extensionCandidate;
	NSString* _candidate;
	NSString* _input;

}

@property (nonatomic,copy) NSString * candidate;                                               //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,copy) NSString * input;                                                   //@synthesize input=_input - In the implementation block
@property (assign,getter=isExtensionCandidate,nonatomic) BOOL extensionCandidate;              //@synthesize extensionCandidate=_extensionCandidate - In the implementation block
+(id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(BOOL)arg3 ;
+(int)type;
+(BOOL)supportsSecureCoding;
+(id)candidateWithUnchangedInput:(id)arg1 ;
+(id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 ;
+(id)secureCandidateForInput:(id)arg1 slotID:(unsigned)arg2 ;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(BOOL)arg3 ;
-(void)setExtensionCandidate:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)input;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCandidate:(NSString *)arg1 ;
-(NSString *)candidate;
-(BOOL)isExtensionCandidate;
-(id)candidateByReplacingWithCandidate:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 ;
-(id)initWithUnchangedInput:(id)arg1 ;
-(void)setInput:(NSString *)arg1 ;
@end

