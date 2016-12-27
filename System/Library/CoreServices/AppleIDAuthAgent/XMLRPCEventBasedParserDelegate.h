/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:45:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableArray, NSString;

@interface XMLRPCEventBasedParserDelegate : NSObject <NSXMLParserDelegate> {

	XMLRPCEventBasedParserDelegate* myParent;
	NSMutableArray* myChildren;
	int myElementType;
	NSString* myElementKey;
	id myElementValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setElementKey:(id)arg1 ;
-(id)elementKey;
-(BOOL)isDictionaryElementType:(int)arg1 ;
-(id)parseInteger:(id)arg1 ;
-(id)parseDouble:(id)arg1 ;
-(id)parseBoolean:(id)arg1 ;
-(void)addElementValueToParent;
-(id)parseDateString:(id)arg1 withFormat:(id)arg2 ;
-(id)parseData:(id)arg1 ;
-(id)parseString:(id)arg1 ;
-(id)elementValue;
-(void)setElementValue:(id)arg1 ;
-(void)dealloc;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(int)elementType;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(void)setElementType:(int)arg1 ;
-(id)parseDate:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
@end
