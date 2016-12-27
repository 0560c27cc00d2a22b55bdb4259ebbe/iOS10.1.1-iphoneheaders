/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileMail.app/PlugIns/MailWebProcessBundle.bundle/MailWebProcessBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary, JSValue;


@protocol MFMailWebProcessDictionaryWrapperJSMethods <JSExport>
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,copy,readonly) NSDictionary * dictionary; 
@property (nonatomic,retain) JSValue * onChangeCallback; 
@optional
-(id)objectForKey:(id)arg1 __JS_EXPORT_AS__getValue:(id)arg2;
-(void)setObject:(id)arg1 forKey:(id)arg2 __JS_EXPORT_AS__setValue:(id)arg3;
-(void)removeObjectForKey:(id)arg1 __JS_EXPORT_AS__removeValueForKey:(id)arg2;

@required
-(JSValue *)onChangeCallback;
-(void)setOnChangeCallback:(id)arg1;
-(id)objectForKey:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)name;
-(NSDictionary *)dictionary;
-(void)removeObjectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;

@end

