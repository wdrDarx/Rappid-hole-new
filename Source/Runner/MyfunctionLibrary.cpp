// Fill out your copyright notice in the Description page of Project Settings.


#include "MyfunctionLibrary.h"

TArray<FString> UMyfunctionLibrary::FindFiles(FString Directory, FString extension)
{
	TArray<FString> files;
	FFileManagerGeneric fm;
	fm.FindFiles(files, *Directory, *extension);
	return files;
}
