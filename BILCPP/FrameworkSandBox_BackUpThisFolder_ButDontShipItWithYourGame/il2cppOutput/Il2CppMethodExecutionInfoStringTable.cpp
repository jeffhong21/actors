﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"









#if IL2CPP_MONO_DEBUGGER
extern const char* g_methodExecutionContextInfoStrings[] = {
"attr",
"otherAttr",
"a",
"t",
"index",
"otherTab",
"count",
"result",
"tab",
"tabAttr",
"b",
"couldBeHex",
"couldBeRGB",
"didConvert",
"components",
"i",
"component",
"c",
"str",
"lastChar",
"CS$<>8__locals0",
"aliasFieldInfo",
"item",
"counter",
"iList",
"value",
"copy",
"obj",
"all",
"method",
"field",
"property",
"event",
"type",
"message",
"aliasPropertyInfo",
"aliasMethodInfo",
"m1",
"m2",
"p1",
"p2",
"p1a",
"p2a",
"builder",
"isExtensionMethod",
"genArgs",
"pinfos",
"len",
"param",
"paramTypeName",
"parentDirName",
"parentDirectories",
"pathDirectories",
"commonDirectory",
"relativePath",
"getter",
"setter",
"flag",
"compilerGeneratedName",
"fields",
"cellSize",
"height",
"rowCount",
"x",
"y",
"column",
"row",
"columnWidth",
"current",
"next",
"sb",
"name",
"args",
"rank",
"arg",
"dotIndex",
"identifiers",
"del",
"fromMethods",
"toMethods",
"equalityMethod",
"comparer",
"attrs",
"valid",
"methodName",
"typeName",
"altTypeName",
"lowerType",
"higherType",
"currentType",
"interfaces",
"methodParams",
"fieldInfo",
"propertyInfo",
"methodInfo",
"eventInfo",
"matches",
"definitions",
"constructedParameters",
"unknownCount",
"constraints",
"constraint",
"parameter",
"constraintDefinition",
"constraintParams",
"paramParams",
"resolvedMap",
"definition",
"specialConstraints",
"j",
"p",
"parameters",
"strings",
"started",
"typesSeen",
"argsToCheck",
"lookingForType",
"allSeen",
"innerArg",
"element",
"selectedValue",
"member",
"found",
"ptr",
"newArray",
"queuedAssemblies",
"loadedAssemblies",
"assemblyFlag",
"types",
"array",
"path",
"isInScriptAssemblies",
"isInProject",
"isUserScriptAssembly",
"isPluginScriptAssembly",
"isGame",
"isPlugin",
"isUser",
"isEditor",
"pathDir",
"otherName",
"referencedAsssemblies",
"filePrefix",
"includeUserTypes",
"wasFreed",
"rootIsStatic",
"memberPath",
"resultType",
"prop",
"setItemMethod",
"steps",
"step",
"expectMethod",
"indexStr",
"elementType",
"possibleMembers",
"stepMethodParameterCount",
"parameterCount",
"currentInstance",
"innerDict",
"removed",
"toRemoveBufferFirstKey",
"toRemoveBufferSecondKey",
"outerDictionary",
"innerKeyPair",
"CS$<>8__locals1",
"getMethod",
"setMethod",
"inst",
"niceName",
"resourcesPath",
"folders",
"currDir",
"instance",
"options",
"curr",
"currResult",
"currA",
"currB",
"hash",
"k",
"slope",
"lastI",
"f",
"d",
"boundsLowerLeft",
"boundsUpperRight",
"dot",
"u",
"a1",
"b1",
"c1",
"a2",
"b2",
"c2",
"delta",
"direction",
"position",
"angleInRadians",
"cosTheta",
"sinTheta",
"range",
"digits",
"oneRevolution",
"sMin",
"sMax",
"sAngle",
"offset",
"cache",
"errorMessage",
"memberInfo",
"m",
"memberInfos",
"tmpMemberInfos",
"bindingFlags",
"hasNoParamaters",
"isInstance",
"isStatic",
"isPublic",
"isNonPublic",
"methodInfos",
"namedMember",
"modCount",
"strMemberTypes",
"strAccessModifiers",
"strReturnType",
"strParameters",
"accessModifies",
"noParamaterExpected",
"wrongParameters",
"wrongReturnType",
"colCount",
"newArr",
"tmpX",
"_y",
"tmpY",
"decimalLength",
"version",
"typeSize",
"elementCount",
"bytes",
"byteCount",
"toHandle",
"charPtr1",
"fromPtr1",
"toPtr1",
"charPtr2",
"fromPtr2",
"toPtr2",
"charPtr3",
"fromPtr3",
"toPtr3",
"charPtr4",
"fromPtr4",
"toPtr4",
"fromHandle",
"restBytes",
"ulongCount",
"fromOffsetCount",
"toOffsetCount",
"fromUlongPtr",
"toUlongPtr",
"fromBytePtr",
"toBytePtr",
"boldStyle",
"boxStyle",
"labelStyle",
"lhsEventCamera",
"rhsEventCamera",
"rid",
"lid",
"modules",
"module",
"changedModule",
"imax",
"ent",
"internalHandlers",
"e",
"temp",
"handlerCount",
"transform",
"behaviour",
"inputs",
"baseInput",
"t1",
"t2",
"commonRoot",
"pointerData",
"created",
"raycast",
"pressed",
"released",
"leftData",
"pos",
"rightData",
"middleData",
"data",
"targetGO",
"lastPointer",
"baseEventData",
"pointer",
"selectHandlerGO",
"tracked",
"toModify",
"shouldActivate",
"toSelect",
"usedEvent",
"touch",
"currentOverGo",
"newPressed",
"time",
"diffTime",
"pointerUpHandler",
"move",
"movement",
"allow",
"similarDir",
"axisEventData",
"mouseData",
"leftButtonData",
"scrollHandler",
"pointerEvent",
"wantsEnable",
"leftPressData",
"pointerEventData",
"ray",
"distanceToClipPlane",
"hitCount",
"bmax",
"sr",
"eventPosition",
"eventDisplayIndex",
"projectionDirection",
"newColor",
"newValue",
"isUnityObject",
"rebuild",
"parent",
"templateGo",
"itemToggle",
"popupCanvas",
"comp",
"list",
"rootCanvas",
"dropdownRectTransform",
"itemTemplate",
"content",
"contentRectTransform",
"dropdownContentRect",
"itemTemplateRect",
"offsetMin",
"offsetMax",
"itemSize",
"prev",
"$locvar0",
"prevNav",
"toggleNav",
"sizeDelta",
"extraSpace",
"corners",
"rootCanvasRectTransform",
"rootCanvasRect",
"axis",
"outside",
"corner",
"itemRect",
"blocker",
"blockerRect",
"blockerCanvas",
"dropdownCanvas",
"blockerImage",
"blockerButton",
"group",
"tween",
"selectedIndex",
"tr",
"dropdown",
"fontData",
"exists",
"texts",
"text",
"currentMat",
"currentCanvas",
"r",
"v",
"color32",
"ignoreParentGroups",
"continueTraversal",
"canvas",
"filter",
"raycastValid",
"currentColor",
"mode",
"colorTween",
"alphaColor",
"canvasGraphics",
"displayIndex",
"currentEventCamera",
"w",
"h",
"hitDistance",
"hits",
"totalCount",
"go",
"appendGraphic",
"dir",
"cameraFoward",
"distance",
"trans",
"transForward",
"castResult",
"graphic",
"graphics",
"spritePixelsPerUnit",
"referencePixelsPerUnit",
"spriteRatio",
"rectRatio",
"oldHeight",
"oldWidth",
"padding",
"size",
"spriteW",
"spriteH",
"alphaTex",
"uv",
"spriteSize",
"spritePivot",
"rectPivot",
"drawingSize",
"spriteBoundSize",
"drawOffset",
"vertices",
"uvs",
"triangles",
"outer",
"inner",
"border",
"rect",
"adjustedBorders",
"x2",
"y2",
"tileWidth",
"tileHeight",
"uvMin",
"uvMax",
"xMin",
"xMax",
"yMin",
"yMax",
"clipped",
"nTilesW",
"nTilesH",
"nVertices",
"maxTiles",
"imageRatio",
"targetTilesW",
"targetTilesH",
"y1",
"x1",
"uvScale",
"startIndex",
"originalRect",
"borderScaleRatio",
"combinedBorders",
"uiv",
"tx0",
"ty0",
"tx1",
"ty1",
"fill",
"side",
"fx0",
"fx1",
"fy0",
"fy1",
"even",
"val",
"angle",
"cos",
"sin",
"i0",
"i1",
"i2",
"i3",
"local",
"spriteRect",
"normalized",
"adjustedBorder",
"lerp",
"g",
"validatorMethod",
"charactersToCheck",
"selectionRange",
"selectionStart",
"selectionEnd",
"caretChanged",
"theCanvas",
"mouseRay",
"dist",
"plane",
"lastBottomY",
"topY",
"bottomY",
"leading",
"gen",
"line",
"startCharIndex",
"endCharIndex",
"charInfo",
"charPos",
"distToCharStart",
"distToCharEnd",
"localMousePos",
"hadFocusBefore",
"currentEventModifiers",
"ctrl",
"shift",
"alt",
"ctrlOnly",
"consumedEvent",
"shouldContinue",
"startPos",
"endPos",
"spaceLoc",
"originChar",
"originLine",
"endCharIdx",
"replaceString",
"insertionPoint",
"fullText",
"processed",
"isEmpty",
"extents",
"settings",
"lines",
"caretLine",
"startLine",
"endLine",
"characters",
"width",
"helper",
"roundingOffset",
"adjustedPos",
"startPosition",
"cursorChar",
"characterLine",
"screenHeight",
"startChar",
"endChar",
"currentLineIndex",
"lastCharInLineIndex",
"vert",
"currentChar",
"startCharInfo",
"endCharInfo",
"endPosition",
"cursorBeforeDash",
"dashInSelection",
"selectionAtStart",
"nextChar",
"rootSortCanvas",
"stencilDepth",
"desiredStencilBit",
"maskMaterial",
"unmaskMaterial",
"maskMaterial2",
"unmaskMaterial2",
"toUse",
"maskComponent",
"maskMat",
"cull",
"mat",
"newParent",
"toNotify",
"canvasList",
"depth",
"rectMaskComponents",
"canvasComponents",
"componentToReturn",
"rmi",
"shouldAdd",
"defaultNav",
"tex",
"scaleX",
"scaleY",
"validRect",
"clipRect",
"renderMode",
"maskIsCulled",
"clipRectChanged",
"forceClip",
"clipTarget",
"maskable",
"currentValue",
"anchorMin",
"anchorMax",
"localCursor",
"handleCenterRelativeToContainerCorner",
"handleCorner",
"parentSize",
"remainingSize",
"oldAxis",
"oldReverse",
"axisCoordinate",
"viewIsChild",
"hScrollbarIsChild",
"vScrollbarIsChild",
"allAreChildren",
"pointerDelta",
"deltaTime",
"speed",
"newVelocity",
"hiddenLength",
"contentBoundsMinPosition",
"newLocalPosition",
"localPosition",
"contentSize",
"contentPos",
"contentPivot",
"excess",
"viewWorldToLocalMatrix",
"vMin",
"vMax",
"bounds",
"min",
"max",
"groupAllowInteraction",
"shouldBreak",
"state",
"triggerName",
"tintColor",
"transitionSprite",
"localDir",
"maxScore",
"bestPick",
"sel",
"selRect",
"selCenter",
"myVector",
"score",
"selected",
"transitionState",
"oldNormalizedValue",
"clickRect",
"newEnt",
"localCanvas",
"verts",
"unitsPerPixel",
"vertCount",
"tempVertsIndex",
"oldValue",
"oldGroup",
"oldAllowSwitchOff",
"emptyIClipperDic",
"compoundRect",
"point1",
"point2",
"canvasTransform",
"screenSize",
"disp",
"scaleFactor",
"logWidth",
"logHeight",
"logWeightedAverage",
"currentDpi",
"dpi",
"targetDPI",
"fitting",
"minColumns",
"preferredColumns",
"minRows",
"cellCountX",
"minSpace",
"cellCountY",
"cornerX",
"cornerY",
"cellsPerMainAxis",
"actualCellCountX",
"actualCellCountY",
"requiredSpace",
"startOffset",
"positionX",
"positionY",
"combinedPadding",
"controlSize",
"childForceExpandSize",
"totalMin",
"totalPreferred",
"totalFlexible",
"alongOtherAxis",
"child",
"preferred",
"flexible",
"alignmentOnAxis",
"innerSize",
"offsetInCell",
"minMaxLerp",
"itemFlexibleMultiplier",
"childSize",
"toIgnoreList",
"ignorer",
"availableSpace",
"surplusSpace",
"rebuilder",
"comps",
"validLayoutGroup",
"layoutRoot",
"cur",
"dummy",
"maxPriority",
"layoutComp",
"priority",
"replaceItemIndex",
"replaceItem",
"raycast3DMethodInfo",
"raycast2DMethodInfo",
"raycastAllMethodInfo",
"getRayIntersectionAllMethodInfo",
"getRayIntersectionAllNonAllocMethodInfo",
"getRaycastAllNonAllocMethodInfo",
"vh",
"neededCpacity",
"start",
"end",
"vt",
"neededCapacity",
"output",
"entry",
"declaringType",
"signature",
"genericArguments",
"useSignature",
"wasAmbiguous",
"serializableFormatter",
"argCount",
"ex",
"length",
"peekedEntry",
"exitNode",
"serializer",
"formatter",
"node",
"entryByte",
"id",
"bytesPerElement",
"byteArray",
"tempBuffer",
"fromBytes",
"longValue",
"ulongValue",
"oldPosition",
"charSizeFlag",
"charLength",
"skipBytesLength",
"elements",
"bytesToSkip",
"entryType",
"toBytes",
"twoByteString",
"nodeName",
"typeID",
"typeNameStartIndex",
"idSplitIndex",
"idStr",
"intLength",
"reader",
"guidStr",
"separatorIndex",
"writer",
"needsEscape",
"intChar",
"valueSeparatorIndex",
"insideString",
"foundEntryType",
"c3",
"c4",
"guessedPrimitiveType",
"p3",
"p4",
"newBuffer",
"separator",
"parsedId",
"hex",
"methods",
"selector",
"context",
"binary",
"delegateType",
"target",
"invocationList",
"combinedDelegate",
"targetType",
"key",
"pair",
"endNode",
"lengthStr",
"lengthsStrs",
"lengths",
"rankTotal",
"rankVal",
"indices",
"boxedValue",
"members",
"expectedType",
"entryValue",
"memberValue",
"info",
"serializable",
"readerWriter",
"ticks",
"assembly",
"customAttributes",
"toResolve",
"assemblies",
"ass",
"typeStr",
"assemblyStr",
"firstComma",
"secondComma",
"actualTypeName",
"genericArgNames",
"isGeneric",
"isArray",
"arrayRank",
"argsArray",
"argsStr",
"parsingGenericArguments",
"argName",
"genericDepth",
"resolver",
"policy",
"serializedType",
"serializedTypeIsNullable",
"allowCastMethod",
"castMethod",
"guid",
"success",
"isPrimitive",
"assignableCast",
"alternateFormatter",
"strId",
"ul",
"keys",
"sep",
"sep1",
"sep2",
"z",
"sep3",
"first",
"buffer",
"added",
"attrUncast",
"formatters",
"formatterType",
"inferredArgs",
"compare",
"subArg",
"nullValue",
"map",
"serializedAsAttributes",
"nameAlreadyExists",
"attributes",
"providerType",
"keyType",
"provider",
"keyPathProvider",
"keyString",
"keyStr",
"error",
"validPath",
"backingType",
"secondColon",
"valueType",
"refValue",
"listObj",
"listType",
"listElementType",
"elementIsValueType",
"collectionType",
"countProp",
"add",
"addMethod",
"remove",
"listInterfaceType",
"removeAtMethod",
"dictionaryObj",
"typeArgs",
"iType",
"getItemMethod",
"dictArgs",
"dictType",
"privateTypeName",
"plusIndex",
"setParentInstance",
"containsKeyMethod",
"containsKey",
"s",
"lookup",
"rLength",
"union",
"unityResolver",
"con",
"stream",
"serContext",
"deserContext",
"unityReferences",
"willUnitySerialize",
"underlyingType",
"format",
"formatOverride",
"unityObjectInstance",
"isNull",
"formatGuess",
"bytesStr",
"cachedContext",
"unityObjects",
"policyOverride",
"serializationPolicy",
"prefabData",
"skip",
"mod",
"longestByteCount",
"streamCache",
"modStr",
"modification",
"entryName",
"values",
"modifications",
"compared",
"singleton",
"typeToReflect",
"cloneObject",
"arrayType",
"originalFieldValue",
"clonedFieldValue",
"walker",
"l",
"targetID",
"minCols",
"indexNext",
"indexPrev",
"tmp",
"boundary",
"leftIndex",
"middleIndex",
"total",
"probs",
"randomPoint",
"sibls",
"posObj",
"results",
"prefab",
"point",
"endTime",
"totalTime",
"totalCalls",
"behaviors",
"behavior",
"q",
"ob",
"other",
"hc",
"len1",
"len2",
"num",
"composer",
"bp",
"mono",
"_components",
"o",
"sibling",
"hasValue",
"ev",
"poolID",
"isMono",
"groups",
"tag",
"entity",
"blueprint",
"prefabInstance",
"uniref",
"lenAddLater",
"storage",
"objectFields",
"groupType",
"myFieldInfo",
"groupByAttribute",
"groupExcludeAttribute",
"excludeFilter",
"includeFilter",
"haveFound",
"processing",
"cachedSignals",
"reciever",
"intType",
"isCached",
"attribute",
"fieldType",
"tagsChanged",
"tickable",
"tickableFixed",
"tickableLate",
"changed",
"n",
"nbChars",
"nbDecimals",
"valueLong",
"isLeadingZero",
"isToReplace",
"newChars",
"entityID",
"gr",
"dte",
"dict",
"container",
"disposable",
"poolValue",
"chunk",
"pool",
"kvp",
"stack",
"objs",
"stacked",
"createdPrefab",
"poolable",
"poolStash",
"resolve",
"possibleObj",
"scriptable",
"awakeble",
"toWipe",
"isKernel",
"needToBeCleaned",
"factory",
"ireq",
"timer",
"timers",
"materialID",
"pivot",
"materialCount",
"mesh",
"subTextObjects",
"canvasRenderer",
"rotation",
"mat_MainTex",
"renderer",
"tagEnd",
"spriteCount",
"isUsingFallback",
"isUsingAlternativeTypeface",
"glyph",
"tempFontAsset",
"prev_fontAsset",
"prev_material",
"prev_materialIndex",
"prev_MaterialIndex",
"spriteAsset",
"spriteIndex",
"srcGlyph",
"referenceCount",
"isDefaultMaterial",
"lossyScaleY",
"totalCharacterCount",
"baseScale",
"currentElementScale",
"fontSizeDelta",
"charCode",
"style_padding",
"bold_xAdvance_multiplier",
"beginUnderline",
"underline_start",
"underline_end",
"beginStrikethrough",
"strikethrough_start",
"strikethrough_end",
"beginHighlight",
"highlight_start",
"highlight_end",
"vertexColor",
"lineGap",
"lineOffsetDelta",
"isStartOfNewLine",
"pageToDisplay",
"previousPageOverflowChar",
"ellipsisIndex",
"margins",
"marginWidth",
"marginHeight",
"pageAscender",
"maxVisibleDescender",
"isMaxVisibleDescenderSet",
"isFirstWord",
"ignoreNonBreakingSpace",
"isLastBreakingChar",
"linebreakingWidth",
"wrappingIndex",
"endTagIndex",
"last_vert_index",
"anchorOffset",
"justificationOffset",
"vert_index_X4",
"sprite_index_X4",
"wordCount",
"lineCount",
"lastLine",
"isFirstSeperator",
"isStartOfWord",
"wordFirstChar",
"wordLastChar",
"lossyScale",
"underlineColor",
"strikethroughColor",
"highlightColor",
"xScale",
"underlineStartScale",
"underlineEndScale",
"underlineMaxScale",
"underlineBaseLine",
"lastPage",
"strikethroughPointSize",
"strikethroughScale",
"strikethroughBaseline",
"characterInfos",
"isUsingAltTypeface",
"smallCapsMultiplier",
"old_scale",
"glyphAdjustments",
"monoAdvance",
"fontBaseLineOffset",
"top_left",
"bottom_left",
"top_right",
"bottom_right",
"elementAscender",
"elementDescender",
"elementDescenderII",
"sprite",
"spriteScale",
"adjustmentPair",
"nextGlyph",
"keyValue",
"previousGlyph",
"gradientScale",
"shear_value",
"topShear",
"bottomShear",
"positionOffset",
"baseAscender",
"baseDescender",
"isJustifiedOrFlush",
"lineAscender",
"lineDescender",
"offsetDelta",
"ascender",
"tabSize",
"tabs",
"scaleFXMultiplier",
"currentFontAsset",
"currentCharacter",
"currentLine",
"lineInfo",
"lineAlignment",
"isCharacterVisible",
"isUnderline",
"isStrikethrough",
"strikethroughOffset",
"isHighlight",
"lastCharOfCurrentLine",
"isFlush",
"gap",
"visibleCount",
"spaces",
"ratio",
"lineExtents",
"uvOffset",
"x0",
"y0",
"dx",
"dy",
"xDelta",
"yDelta",
"isUnderlineVisible",
"currentPage",
"lastVisibleCharacterIndex",
"isStrikeThroughVisible",
"isHighlightVisible",
"currentHighlightColor",
"isColorTransition",
"mainBounds",
"center",
"subBounds",
"scale",
"vertexIndex",
"vertexOffset",
"softnessX",
"softnessY",
"mask",
"isCameraAssigned",
"canvasRenderMode",
"canvasScaleFactor",
"parentBaseColor",
"characterCount",
"temp_charInfo",
"pairs",
"uniqueKey",
"baseMaterialID",
"stencilMaterial",
"stencilMaterialID",
"stopAfter",
"modifiers",
"sourceID",
"texID",
"fallback",
"fallbackMaterial",
"sizeX4",
"sizeX6",
"index_X6",
"index_X4",
"s0",
"s1",
"size_x_s0",
"size_x_s1",
"index_x_s0",
"index_x_s1",
"size_X4",
"size_X6",
"previousSize",
"src",
"dst",
"src_Index",
"dst_Index",
"vertex",
"color",
"isPlaying",
"shader",
"tempMaterial",
"nameHashCode",
"unicode",
"hashCode",
"style",
"subMesh",
"rectTransform",
"decimalPrecision",
"writeIndex",
"srcOffset",
"styleLength",
"openingTagArray",
"closingTagArray",
"integer",
"lastIndex",
"preferredWidth",
"preferredHeight",
"margin",
"fontSize",
"maxXAdvance",
"renderedWidth",
"renderedHeight",
"savedLineState",
"savedWordWrapState",
"extent",
"temp_lineInfo",
"faceInfo",
"uv0",
"uv1",
"uv2",
"uv3",
"spriteColor",
"c0",
"materialIndex",
"characterInfoArray",
"backColor",
"verticesCount",
"segmentWidth",
"startPadding",
"endPadding",
"underlineThickness",
"uvs0",
"uv4",
"uv5",
"uv6",
"uv7",
"min_UvX",
"max_UvX",
"uvs2",
"colors32",
"customUV",
"isItalic",
"fontAsset",
"weightIndex",
"endIndex",
"attributeCount",
"isIntegerValue",
"decimalPointMultiplier",
"valueSignMultiplier",
"tagCharCount",
"attributeFlag",
"tagUnits",
"tagType",
"attributeIndex",
"isTagSet",
"isValidHtmlTag",
"fontHashCode",
"materialAttributeHashCode",
"materialHashCode",
"tempFont",
"gradientPresetHashCode",
"tempColorGradientPreset",
"spriteAssetHashCode",
"tempSpriteAsset",
"actionID",
"materialReference",
"paramCount",
"tableWidth",
"newSize",
"ratio_A",
"ratio_B",
"ratio_C",
"isRatioEnabled",
"faceDilate",
"outlineThickness",
"outlineSoftness",
"weight",
"glowOffset",
"glowOuter",
"underlayOffsetX",
"underlayOffsetY",
"underlayDilate",
"underlaySoftness",
"extraPadding",
"maxPadding",
"faceSoftness",
"scaleRatio_A",
"scaleRatio_B",
"scaleRatio_C",
"uniformPadding",
"shaderKeywords",
"offsetX",
"offsetY",
"dilate",
"softness",
"packet",
"diff",
"newPlayer",
"existingPlayerController",
"msg",
"peer",
"pid",
"playerController",
"newClient",
"foundId",
"payloadReader",
"localNetworkIdentity",
"handler",
"spawnedId",
"localObject",
"netId",
"cmdHash",
"errorCmdName",
"oldOwner",
"pendingOwner",
"ii",
"numPlayers",
"ids",
"numPeers",
"peerInfo",
"extraPayloadSize",
"numScripts",
"stateHash",
"normalizedTime",
"animMsg",
"tt",
"st",
"par",
"newFloatValue",
"newBoolValue",
"client",
"animSync",
"inv",
"invoker",
"newGameObjectNetId",
"oldGameObjectNetId",
"newLen",
"sz",
"uf",
"top",
"hostnameOrIp",
"usePlatformSpecificProtocols",
"endPointType",
"config",
"minTimeout",
"maxTimeout",
"ip",
"simLatency",
"simConfig",
"numEvents",
"networkEvent",
"connectionId",
"channelId",
"receivedSize",
"dataError",
"disconnectError",
"msgDelegate",
"errorBuffer",
"netMsg",
"numChannels",
"packetSize",
"qos",
"actualPacketSize",
"channel",
"msgReader",
"msgType",
"msgSize",
"msgId",
"msgBuffer",
"script",
"localChannel",
"remote",
"chars",
"cc",
"err",
"senderAddr",
"senderPort",
"recv",
"xpos",
"ypos",
"suffix",
"addr",
"dataString",
"items",
"newId",
"foundComp",
"invokeFunction",
"invokeClass",
"invokeFound",
"invokeComponent",
"dirtyChannelBits",
"wroteData",
"oldPos",
"behaviourOfSameChannel",
"channels",
"itr",
"originAuthority",
"newObservers",
"oldObservers",
"conn",
"lobbyPlayer",
"loadedSceneName",
"pending",
"controllerId",
"gamePlayer",
"countPlayers",
"player",
"readyCount",
"playerCount",
"numPlayersForConnection",
"errorMsg",
"slot",
"newLobbyGameObject",
"newLobbyPlayer",
"playerControllerId",
"lobbyController",
"outMsg",
"backgroundRec",
"addRec",
"controllers",
"lobby",
"dirty",
"rec",
"youStr",
"logLevel",
"localClient",
"serverWasActive",
"newSceneName",
"addPlayer",
"foundPlayer",
"prefix",
"fullURI",
"noConnection",
"serverMsg",
"match",
"peerId",
"playerObj",
"listMsg",
"addresses",
"address",
"port",
"networkId",
"error2",
"playerIds",
"objUV",
"newPlayerId",
"pl",
"foundObj",
"playerObject",
"extraDataReader",
"sceneOption",
"yourConnectionId",
"youAreNewHost",
"hit",
"a0",
"a3",
"a4",
"numBytes",
"foundNetworkIdentity",
"view",
"newLocalClient",
"playerNetworkIdentity",
"oldController",
"oldPlayer",
"newPlayerController",
"localConnection",
"owner",
"vis",
"cmdObject",
"foundOwner",
"objNetworkIdentity",
"netIds",
"crcMsg",
"entries",
"childTransforms",
"vel",
"rot",
"childIndex",
"children",
"foundSync",
"throwError",
"componentMissing",
"orientation",
"totalDistToTarget",
"perSecondDist",
"oldVelocity",
"newRotation",
"rotv",
"spin",
"targetFacing",
"actualFront",
"targetPositionOffset",
"targetFront",
"transforms",
"transformCached",
"cWeapon",
"cHealth",
"flags",
"blitMaterial",
"material",
"tw",
"th",
"ts",
"rtMask",
"rtBlur",
"fbFormat",
"tempRT",
"bloom",
"lensDirt",
"useRGBM",
"rtFormat",
"logh",
"logh_i",
"iterations",
"lthresh",
"knee",
"curve",
"sampleScale",
"prefiltered",
"last",
"bloomTex",
"level",
"pass",
"baseTex",
"tempRT2",
"sy",
"sx",
"col",
"arrow",
"vcount",
"iy",
"ix",
"spectralLut",
"pixels",
"Y",
"X",
"Z",
"L",
"M",
"S",
"w1",
"w2",
"sum",
"nLift",
"avgLift",
"liftR",
"liftG",
"liftB",
"nGamma",
"avgGamma",
"gammaR",
"gammaG",
"gammaB",
"invGammaR",
"invGammaG",
"invGammaB",
"nGain",
"avgGain",
"gainR",
"gainG",
"gainB",
"nSlope",
"avgSlope",
"slopeR",
"slopeG",
"slopeB",
"nPower",
"avgPower",
"powerR",
"powerG",
"powerB",
"invPowerR",
"invPowerG",
"invPowerB",
"nOffset",
"avgOffset",
"offsetR",
"offsetG",
"offsetB",
"curves",
"lutMaterial",
"tonemapping",
"lift",
"gamma",
"gain",
"power",
"inBlack",
"outBlack",
"inWhite",
"outWhite",
"blackRatio",
"whiteRatio",
"bakedLut",
"fov",
"radiusInPixels",
"colorFormat",
"cocFormat",
"aspect",
"coeff",
"maxCoC",
"rtCoC",
"rt1",
"rt2",
"blend",
"rtFiltered",
"rndOffsetX",
"rndOffsetY",
"noiseTex",
"rt",
"scaleOffsetRes",
"kernel",
"pp",
"fogColor",
"qualitySettings",
"consoleSettings",
"grainMaterial",
"maxBlurPixels",
"tileSize",
"velocityScale",
"vbuffer",
"tile2",
"tile4",
"tile8",
"tileMaxOffs",
"tile",
"neighborMax",
"neighborMaxWidth",
"neighborMaxHeight",
"frame",
"frameCount",
"f1",
"f2",
"f3",
"f4",
"formats",
"camera",
"downsampleAmount",
"rtW",
"rtH",
"sWidth",
"sHeight",
"pixelsPerMeterAtOneMeter",
"P",
"projInfo",
"cameraClipInfo",
"warpToScreenSpaceMatrix",
"projectToPixelMatrix",
"intermediateFormat",
"kNormalAndRoughnessTexture",
"kHitPointTexture",
"kBlurTexture",
"kFilteredReflections",
"kFinalReflectionTexture",
"kTempTexture",
"inputTex",
"lowMip",
"jitter",
"tempHistory",
"fraction",
"vertical",
"horizontal",
"left",
"right",
"bottom",
"matrix",
"roundness",
"uberActive",
"fxaaActive",
"taaActive",
"dofActive",
"uberMaterial",
"autoExposure",
"fxaaMaterial",
"cb",
"cs",
"model",
"oldRT",
"enumerator",
};
#else
extern const char* g_methodExecutionContextInfoStrings[1] = { };
#endif
