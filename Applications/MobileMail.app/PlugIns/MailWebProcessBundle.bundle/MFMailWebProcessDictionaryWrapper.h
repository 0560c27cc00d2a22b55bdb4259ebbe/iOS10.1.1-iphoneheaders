/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileMail.app/PlugIns/MailWebProcessBundle.bundle/MailWebProcessBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/JSExport.h>
#import <MailWebProcessBundle/MFMailWebProcessDictionaryWrapperJSMethods.h>

@class NSString, NSDictionary, JSValue, NSMutableDictionary;

@interface MFMailWebProcessDictionaryWrapper : NSObject <JSExport, MFMailWebProcessDictionaryWrapperJSMethods> {

	NSMutableDictionary* _storage;
	NSString* _name;
	JSValue* _onChangeCallback;

}

@property (nonatomic,copy) NSDictionary * dictionary; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) JSValue * onChangeCallback;              //@synthesize onChangeCallback=_onChangeCallback - In the implementation block
-(JSValue *)onChangeCallback;
-(void)setOnChangeCallback:(JSValue *)arg1 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)initWithName:(id)arg1 ;
@end

